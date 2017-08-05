/*
 * TM4C129_CPP_calls_returning_pointer.cpp
 *
 *  Created on: 5 Aug 2017
 *      Author: mr_halfword
 */

#include <stddef.h>
#include <stdio.h>

class Syslog
{
public:
    static Syslog *Init (void);
    void Printf (const char *text);
    static Syslog *global_instance;
};

class Board {
 public:
  virtual ~Board();
  Syslog* syslog() { return syslog_; }
 protected:
  Board()
      : syslog_(NULL) {}

  Syslog* syslog_;
};

class BoardImpl : public Board {
 public:
  BoardImpl();
};

Syslog *Syslog::global_instance;

Syslog *Syslog::Init (void)
{
    if (global_instance == NULL)
    {
        global_instance = new (Syslog);
    }

    return global_instance;
}

void Syslog::Printf (const char *text)
{
    printf (text);
    printf ("\n");
}

BoardImpl::BoardImpl() : Board() {
  Board::syslog_ = Syslog::Init();
}

Board::~Board()
{
}

void some_function() {
  BoardImpl board;
  Board *board_ptr = &board;
  Syslog* syslog_local = board_ptr->syslog();

  // works fine
  syslog_local->Printf("blah");

  // crashes with unaligned access
  board_ptr->syslog()->Printf("blah");

}

int main (void)
{
    some_function ();

    return 0;
}
