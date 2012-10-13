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
	
