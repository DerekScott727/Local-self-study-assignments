#include <iostream>

using namespace std;

double cube(double number)
{
    double result = number * number * number;
	return result;	
}

int main ()
{
	double answer = cube(3);
	cout << answer;
	
}