#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main () {
  long begin,end;
  long i=0;
  ifstream myfile ("output.txt");
  begin = myfile.tellg();

  myfile.seekg (0, ios::end);
  end = myfile.tellg();

  cout << "size is: " << (end-begin) << " bytes.\n";
  myfile.seekg (begin);
  for (i=begin; i< (end-3); i++) {
	  char s[10];
	  myfile.read(s, 3);
	  if ( (s[0]=='R') && (s[1]=='e') && (s[2]=='a') ) {
		  cout << "end token found\n";
		  break;
	  }
  }
  myfile.close();
  int a;
  cout << "Enter any number to exit:";       // tell user how to get out. 
  cin >> a; 
  return 0;
}