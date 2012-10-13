#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;


float Daren (int a[], int b) {
	float c=0;
	for (int i=0; i<b; i++)
		c += a[i];
	return(c/b);
}

