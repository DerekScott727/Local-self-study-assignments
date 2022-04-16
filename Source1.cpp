#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main ()
{
	int base, exponent;
	cout<<"What is your base number?: ";
	cin>> base;
	cout<< "What is the exponent you wanna use?";
	cin>> exponent;
	double power = pow(base, exponent);    
	

		
	cout<< power;
}