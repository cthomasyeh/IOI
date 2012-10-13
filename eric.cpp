#include "stdafx.h"
#include <Windows.h>
#include <iostream>


int eric (int a[], int b) {
	int sum=0;
	for (int i=0; i<b; i++) 
	{	
		sum = sum + a[i];
	}
return (sum);
}