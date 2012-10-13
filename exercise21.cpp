#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

/*
int alex(int a, int b) {
	return (a + b);
}
*/
extern int sean(int[], int);
extern int eric(int[], int);
//extern int jeffrey(int);

void main () {

	int index, a;
	int selection = 0;
	int answer;
	int x[4] = { 1, 2, 3, 4}, y=4;

	

	for (;;) {
		cout << "\nEnter a number to select the function call: \n";
		cout << "1: Alex\n2: Eaman\n3: Jeffrey\n4: Daren\n";
		cin >> selection;
		switch (selection) {
		case 1: 
			cout << "calling Sean... Sean is working hard... \n";
			answer = sean(x, y);
			cout << "\nSean finishes his works... \n";
			cout << "Sean said: the largest number in the input array is: " <<  answer << '\n';
			break;
		case 2:
			cout << "calling eric... Eric is working hard... \n";
			answer = eric(x, y);
			cout << "\nEric finishes his works... \n";
			cout << "Eric said: adding all element of array... the  answer is: " << answer << '\n';
			break;
		case 3:
			cout << "calling Jeffrey... Jeffrey is working hard... \n";
			answer = jeffrey(x);
			cout << "\nJeffrey finishes his works... \n";
			cout << "Jeffrey said: doubling " << x << " is: " << answer << '\n';
			break;
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: 
			break;
		case 8: 
			break;
		default:
			break;

		}

	}
  
	//cout << "Enter any number to exit:";       // tell user how to get out. 
	//cin >> a;              

}
