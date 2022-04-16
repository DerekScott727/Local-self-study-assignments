#include <iostream>

using namespace std;

int main()
{
	bool isMale = false;
	bool isTall = true;
	
	
	if(isMale && isTall)
	{
		cout << "You are a tall male.";
	}
	else if (isMale && !isTall) {
		cout << "You are a male but not tall.";
	}
	else if (!isMale && !isTall){
		cout << "You are neither tall, nor are you male.";
	}
	else if (!isMale && isTall){
		cout << "You are not a male, yet you are tall?";
	}
}