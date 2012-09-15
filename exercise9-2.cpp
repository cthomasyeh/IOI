#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{

	 int anArray[3][5] =
		{
			{ 1, 2, 3, 4, 5, },
			{ 6, 7, 8, 9, 10, },
			{ 11, 12, 13, 14, 15 }
		};

	 int oneDArray[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

	
	 int i,j;
	 int answer=0;
	 int answer1=0;
	 int answer2=0;
	 int answer3=0;
	
	 for (i=0; i<15; i+=5) {
		cout << oneDArray[i] << ' ';
	 }
	 cout << '\n';
	 for (i=1; i<15; i+=5) {
		cout << oneDArray[i] << ' ';
	 }
	 cout << '\n';
	 for (i=2; i<15; i+=5) {
		cout << oneDArray[i] << ' ';
	 }
	 cout << '\n';
	 for (i=3; i<15; i+=5) {
		cout << oneDArray[i] << ' ';
	 }
	 cout << '\n';
	 for (i=4; i<15; i+=5) {
		cout << oneDArray[i] << ' ';
	 }
	cout << '\n';

	
	int a;
	cout << "Enter any number to exit:";       // tell user how to get out. 
    cin >> a; 

}