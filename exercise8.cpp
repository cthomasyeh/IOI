#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

// define input and output functions

void main()                               // define main program
{
  string x="abcdef"; 
  int a;
  char y[100];
  int z[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10, 11, 39, 45, 10, 8, 2, 7, 45, 99, 80 };
 
  //cout << x.
  cout << "The 4th element of z array is: " << z[19];

  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.
}      