// exercise3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

// define input and output functions

void main()                               // define main program
{
   
  int studentAge[12] = {10, 11, 12, 13, 15, 20, 8, 9, 12, 25, 30, 6};
  int i, a;
  int greater12=0;
  int oldest=0;
  int youngest=100;
  int rank = 0;

  //for (i=0; i<12; i++) cin >> studentAge[i];

  for (i=0; i<12; i++) {
	  if (studentAge[i] >= 12) greater12 = greater12 + 1;
	  if (studentAge[i] > oldest) {
		  oldest = studentAge[i];
		  rank = i;
	  }
	  if (studentAge[i] < youngest) youngest = studentAge[i];

  }

  cout << "size of array: " << sizeof(studentAge) << '\n';
  cout << "Students older than 12: " << greater12 << '\n';
  cout << "Oldest student age is: " << oldest << " oldest student is in: " << rank + 1 <<"th position\n";
  cout << "Youngest student age is: " << youngest << '\n';

  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.
}                
