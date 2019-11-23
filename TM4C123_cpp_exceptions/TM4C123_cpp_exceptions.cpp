

/**
 * main.c
 */

#include <iostream>
using namespace std;

int main(void)
{
    try
    {
      throw 20;
    }
    catch (int e)
    {
      cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}
