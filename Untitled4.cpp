#include <iostream>

using namespace std;

int main()
{
	
	string DerekGivesShannaAttention;
	cout<< "Are you giving Shanna attention right now?  (yes or no)" << endl;
    cin >> DerekGivesShannaAttention;


	if(DerekGivesShannaAttention == "yes" || DerekGivesShannaAttention == "Yes"){
		cout<< "Give her more " << endl;
	}
	else{
		cout<< "divorce " << endl;
	}
		
}

