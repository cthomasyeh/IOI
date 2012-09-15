// exercise10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystr;
  string age;
  cout << "What's your full name? ";
  getline (cin, mystr);
  cout << "How old are you? ";
  getline (cin, age);
  cout << mystr << " is " <<  age << " years old.\n";
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  int a;
  cout << "Enter any number to exit:";       // tell user how to get out. 
  cin >> a; 

  return 0;
}