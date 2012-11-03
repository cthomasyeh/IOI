// ride.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	string ufoStr;
	string nameStr;
	//float f;
	//FILE * pFile;
	ifstream myfile ("myfile.txt");
	getline(myfile, ufoStr);
	getline(myfile, nameStr);

	cout << ufoStr << '\n';
	cout << nameStr;
	cout << '\n';
	int x = 1;
	int y = 1;
	for (int i=0; i<6; i++) x = x * (((int) ufoStr[i]) - 64);
	for (int i=0; i<6; i++) y = y * (((int) nameStr[i]) - 64);
	cout << x << '\n';
	cout << y << '\n';
	if ((x%47) == (y%47)) cout << "GO";
	else cout << "STAY";
	Sleep(5000);
	return 0;
}

