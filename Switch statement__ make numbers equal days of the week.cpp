#include <iostream>

using namespace std;

int main()
{
	int result;
	
	cout << "Enter first number: ";
	
	int num1;
	cin >> num1;
	
	cout << "Enter operator type: ";
	char op;
	cin >> op;
	
	cout << "Enter second number: ";
	int num2;
	cin >> num2;
	
	if(op == '+')
	{
		result = num1 + num2;
	}
	
	else if(op == '-')
	{
		result = num1 - num2;
	}
	
	else if(op == '*')
	{
		result = num1 * num2;
	}
	
	else if(op == '/')
	{
		result = num1 / num2;
	}
	
	return result;
	
}