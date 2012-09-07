// exercise3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

// define input and output functions

void main()                               // define main program
{
   
  int studentAge[12];
  int i, a;
  
  for (i=0; i<12; i++) cin >> studentAge[i];

  for (i=0; i<12; i++) cout << studentAge[i] << ' ';

  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.
}                
