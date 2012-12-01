#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

enum Days {             
   saturday,            
   sunday = 0,          
   monday,              
   tuesday,             
   wednesday,           
   thursday,
   friday
};

enum Condition {
	cloudy,
	sunny,
	rainy
};

struct Weather {
	Days d;
	Condition w;
};

int main() {
   enum Days today = sunday;
   switch (today) {
      case saturday || sunday:
         cout << "It's Weekend!!" << endl;
         break;
	  case monday:
         cout << "It's Monday" << endl;
         break;
	  case tuesday:
         cout << "It's Tuesday" << endl;
         break;
      default: 
         cout << "Not weekend" << endl;
   }
   Weather w1, w2, w3, w4, w5, w6, w7;
   w1.d = saturday;
   w1.w = rainy;

   Sleep(10000);
}