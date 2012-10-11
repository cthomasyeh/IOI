#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

/*
int alex(int a, int b) {
	return (a + b);
}
*/
extern int alex(int, int);
extern int eaman(int);
extern int jeffrey(int);

void main () {

	int index, a;
	int selection = 0;
	int answer;
	int x = 10, y=20;

	

	for (;;) {
		cout << "\nEnter a number to select the function call: \n";
		cout << "1: Alex\n2: Eaman\n3: Jeffrey\n4: Daren\n";
		cin >> selection;
		switch (selection) {
		case 1: 
			cout << "calling Alex... Aex is working hard... \n";
			answer = alex(x, y);
			cout << "\nAlex finishes his works... \n";
			cout << "Alex said: adding " << x << " and " << y << " together is: " << answer << '\n';
			break;
		case 2:
			cout << "calling Eaman... Eaman is working hard... \n";
			answer = eaman(x);
			cout << "\nEaman finishes his works... \n";
			cout << "Eaman said: doubling " << x << " is: " << answer << '\n';
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
