// exercise10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  string mystr;
  string age;
  int x=0;
  int i=0;
  cout << "Type a single lower case letter: ";
  getline (cin, mystr);
 
  // add your code here

  cout << '\n';
	  
  {
	int a;
	cout << "Enter any number to exit:";       // tell user how to get out. 
	cin >> a;
  }

  return 0;
}