#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

typedef enum {             
   America,            
   Asia,          
   Europe,              
   Africa,             
   Australia           
} Continents;

typedef int numberWithoutDecimalPoint;

int main() {
   Continents c1;
   numberWithoutDecimalPoint a=20;
   int b = 10;
   cout << (a+b);


   Sleep(10000);
}