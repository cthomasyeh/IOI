#include "stdafx.h"
#include <iostream>
using namespace std;

int jeffrey(int num1, int num2) {
	
	//cout<<"The two numbers entered in order were "<<num1<<" and "<<num2<<endl;
	if (num1<num2)
	{
		cout<<num2<<" is the larger of "<<num1<< " and "<<num2<<endl;
		return num2;
	}
	else if (num1>num2)
	{
		cout<<num1<<" is the larger of "<<num1<< " and "<<num2<<endl;
		return num1;
	}
	
	
}