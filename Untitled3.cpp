#include <iostream>

using namespace std;

int main()
{
	int secretnumber = 7;
	
	int guess;
	while(guess != secretnumber)
	{
		cout << "Guess the secret number\n";
		cin >> guess;
	}
	
	cout << "YOU RIGHT!";
}