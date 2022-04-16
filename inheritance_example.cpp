#include <iostream>

using namespace std;

class Chef {                     // Creates the base class called "Chef"
public:	
	void makeChicken (){
		cout << "The chef makes chicken" << endl;           // This is the base classe's first function
		
		
	};
	
	void makeEggs(){
		cout << "The chef makes eggs" << endl;           //This is its 2nd function
		
	};
};

class Italianchef: public Chef {              // Now we create the 2nd class "Italianchef" but we use the " : public Chef " to call the base class and include it into this new class.
public:
 void makePasta(){
 	cout << "The italian chef makes the pasta" << endl;  // This is the 2nd class' own function, but note that the base classes functions will also be available when you call this class.
 };
	
};


int main(){
	
	Italianchef chef;            //This is obstantiating the italian chef class into an object called "chef"
	chef.makePasta();            // This calls the Italianchef fucntion about pasta 
	chef.makeChicken();          // This calls the base class "Chef"'s function which shows that inheritance works because we're calling a function from the inherited class.
	
	return 0;
	
	
}