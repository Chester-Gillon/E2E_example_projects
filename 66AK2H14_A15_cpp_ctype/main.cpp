/*
 * main.cpp
 *
 *  Created on: 28 Jul 2018
 *      Author: mr_halfword
 */

#include <ctype.h>
#include <iostream>

int stricmp( const char *s1, const char *s2)
{
    for ( ; (tolower(*s1) == tolower(*s2)); s1++, s2++)
        if (*s1 == '\0') return(0);   /* EOS */
    /*  Not equal */
    return( *s1 - *s2 );
}

int main (int argc, char *argv[])
{
    __sync_synchronize ();
    std::cout << "Hello World" << std::endl;

    return stricmp ("ToLower", "tOlOWER");
}

