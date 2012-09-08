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
  int greater12=0;
  int oldest=0;
  int youngest=100;

  for (i=0; i<12; i++) cin >> studentAge[i];

  cout << '\n';

  //for (i=0; i<12; i++) cout << studentAge[i] << '\n';
  cout << "First element: " << studentAge[0] << '\n';
  cout << "6th element: " << studentAge[5] << '\n';
  cout << "last element: " << studentAge[11];

  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.

}                
