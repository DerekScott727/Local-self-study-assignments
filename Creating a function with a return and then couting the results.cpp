#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	char op;
	int result;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter operator type: ";
	cin >> op;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	if(op == '+')
	{
		result = num1 + num2;
		cout << result;
	}
	else if(op == '-')
	{
		result = num1 - num2;
		cout << result;
	}
	else
	{
			cout << "Please use a valid operator.";
	}
		
	
	
}