#include <iostream>

using namespace std;

void SayHello(string Name, int age) // void SayHello created variable called SayHello then (string name) creates a string called 'name' which is stored in the paramters of SayHello.

{                          // The Curly bracket makes the variable SayHello into a function, and whatever gets put in the bracket says what the function will do.
	
	cout << "Hello " << Name << " you are " << age << endl;  // The function says to cout "Hello " and then cout the string called Name
	
}

int main ()
{
	SayHello("Mike", 25);    // This calls the function SayHello and it gives the string "Name" a value when you type in "Mike"
	SayHello("Jolph", 32);
	SayHello("Retor", 45);
	SayHello("Lars", 12);
	
}