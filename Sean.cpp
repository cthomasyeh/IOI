#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int sean(int s[], int y)
{
	int x = 0;
	for (int i=0; i<y; i++)
	{
		if (s[i] > x)
		{
			x= s[i];
		}
	}
	return (x);
}
	
void main () {

	int index;
	int s[5];
	s[0] = 250;
	s[1] = 500;
	s[2] = 1645;
	s[3] = 23913;
	s[4] = -5;
	int selection = 0;
	int answer;

	for (;;) 
	{
		cout << "Type the number: \n";
		cout << "1: Sean\n";
		cin >> selection;
		switch (selection) 
		{
		case 1: 
			cout << "calling Sean... Sean is working hard... \n";
			answer = sean(s, sizeof(s)/4 );
			cout << "Sean finished his work... \n";
			cout << "Sean said the largest number of the array is: " << answer << '\n';
			break;
		}
	}

	int z;
	cout << "Enter any number to exit: " << '\n';
	cin >> z;
}