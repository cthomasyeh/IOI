// exercise3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

// define input and output functions

void main()                               // define main program
{
   
	int studentAge[12] = { 10, 12, 13, 19, 8, 7, 10, 11,  14, 15, 16, 9};
  int i, a;
  int greater12=0;
  int oldest=0;
  int youngest=100;

  //for (i=0; i<12; i++) cin >> studentAge[i];

  cout << '\n';

  for (i=0; i<12; i++) {
	if (studentAge[i] > 12) greater12 = greater12 + 1;
	cout << "greater12 is " << greater12 << ", i is: " << i << '\n';
	if (studentAge[i] > oldest) oldest = studentAge[i];
	if (studentAge[i] < youngest) youngest = studentAge[i];
  };

  cout << "Students older than 12: " << greater12 << '\n';

  cout << "Oldest student: " << oldest << '\n';
  cout << "Youngest student: " << youngest << '\n';
  //cout << "last element: " << studentAge[11];

  cout << "\nEnter any number to exit:";       // tell user how to get out. 
  cin >> a;                              // wait for input before exit.

}                
