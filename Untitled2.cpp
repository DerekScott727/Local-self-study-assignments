#include <iostream>

using namespace std;

void Getdayofweek(int daynumber)
{
	string dayname;
	
	switch(daynumber)
	{
		case 0:
			dayname = "Sunday";
			break;
			
		case 1:
			dayname = "Monday";
			break;
			
		case 2:
			dayname = "Tuesday";
			break;
			
		case 3:
			dayname = "Wednesday";
			break;
			
		case 4:
			dayname = "Thursday";
			break;
	}
	cout << dayname;
}

int main()
{
	Getdayofweek(0);
}