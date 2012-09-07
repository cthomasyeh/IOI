// exercise3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

// define input and output functions

void main()                               // define main program
{
   
  int index, a;
  for (index=1; index <=128; index++) cout << (char) index << ' ';
   cout << "Enter any number to exit:";       // tell user how to get out. 
   cin >> a;                              // wait for input before exit.
}                
