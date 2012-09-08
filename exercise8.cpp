// exercise3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

// define input and output functions

void main()                               // define main program
{
  string x="I'm a string."; 
  int a;
  char y[100];
  y[0] = 'a';
  y[1] = 'b';
  y[2] = 'c';
  y[3] = '\0';
  cout << "Array: " << y << '\n';
  cout << "String: " << x << '\n';
  cout << x.size();
  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.
}                
