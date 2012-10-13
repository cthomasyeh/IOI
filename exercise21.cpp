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
extern int jeffrey(int, int);
extern int phillip(int, int);
extern int eaman(int, int);
extern int darren(int[], int);
extern int kevin(int, int);

void main () {

	int index, a;
	int selection = 0;
	int answer;
	int x[5] = { 1, 24, 3, 46, 90}, y=5;

	

	for (;;) {
		cout << "\nEnter a number to select the function call: \n";
		cout << "1: Sean\n2: Eric\n3: Jeffrey\n4: Daren\n5: Phillip\n6: Eaman\n7: Kevin\n";
		cin >> selection;
		switch (selection) {
		case 1: 
			cout << "calling Sean... Sean is working hard... \n";
			//answer = sean(x, y);
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
			answer = jeffrey(10, 200);
			cout << "\nJeffrey finishes his works... \n";
			cout << "Jeffrey said: the largest number is " << x << " is: " << answer << '\n';
			break;			
		case 4:
			//answer = darren(x, y);
			cout << "Darren said: the average value is: " << answer << '\n'; 
			break;
		case 5:
			answer = phillip(100, 12);
			cout << "Phllip said: " << answer << '\n';
			break;
		case 6:
			//answer = eaman(10, 20);
			//cout << "Eric said: " << answer << '\n';
			break;
		case 7: 
			//answer = kevin(10, 20);
			//cout << "Kevin said: the smaller of the two is: " << answer << '\n';
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
