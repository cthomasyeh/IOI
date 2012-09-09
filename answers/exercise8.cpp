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
  string x="This is a test!"; 
  
  int s = x.size();  cout << "Size of input string is: " << s << '\n';

  char y[100];

  int i=0;

  for (i=0; i<s; i++) y[i] = x[(s-1)-i];

  y[s] = '\0'; 
  cout << y;

  int a;
  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.
}                
