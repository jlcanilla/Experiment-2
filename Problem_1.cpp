#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
 	string package;
	float time;
 	float price;
 		cout << "Choose package:";cin >> package;
 
 if ((package == "a") || (package == "b") || (package == "c")) {
 			cout << "Number of hours: "; cin >> time;
 
 if (time <= 744) {
		if (package == "a") {
		if (time > 10) {
		price = 9.95 + (time - 10) * 2;
		
		} else {price = 9.95;}

		} else if (package == "b") {
			
if (time > 20) { price = 14.95 + (time - 20) * 1;} 
	else {price = 14.95;}
	} else {price = 19.95;}
} else { cout << "Invalid!\n";}
} else { cout << "Invalid!\n";} 
cout << "Price: P" << price;

getch ();
return 0;
} 
