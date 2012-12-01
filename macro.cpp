#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

#define MULTIPLY(a, b)    (a - b)

#define A_VERY_BIG_INTEGER  9999999

int main(void)
{
	int a = 10;
	int b = 30;
    cout << "Multiplication of " << a << " and " << b << " is: " << MULTIPLY(a, b) << endl;
    Sleep (10000);
	return (0);
}