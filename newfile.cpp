#include <iostream>

using namespace std;

void Getdayofweek(int daynumber)
{
	if (daynumber == 0)
	{
		cout << "Sunday";
	}
	
	else if (daynumber == 1)
	{
		cout << "Monday";
		
	}
	
	else if (daynumber == 2)
	{
		cout << "Tuesday";
	}
	
	else
	{
		cout << "Number range is only from 0 - 2 for now, please use one of those options.";
	}
}

int main()
{
	Getdayofweek(1);
}