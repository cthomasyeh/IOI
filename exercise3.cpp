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
  //cout << (char) 64 << '\n';
  //cout << (char) 65 << '\n';
  //cout << (char) 66 << '\n';
  //cout << (char) 67 << '\n';

  for (index=1; index <=10; index++) cout << index << '\n';
   
  
  cout << "Enter any number to exit:";       // tell user how to get out. 
   cin >> a;                              // wait for input before exit.
}                
