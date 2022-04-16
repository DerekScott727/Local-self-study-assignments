#include <iostream>

using namespace std;

class Movie{
	private: 
	string rating;
	
	
	public:
		string title;
		string director;
		
		Movie(string aTitle, string aDirector, string aRating){
			title = aTitle;
			director = aDirector;
			setRating(aRating);     // This is where you apply the "setter" to be applied as 
		};
		
		void setRating(string aRating){   // "Setter" - Void return type because this is simply to declare that rating = aRating.
			if (aRating == "E" || aRating == "PG" || aRating == "PG-13" || aRating == "R")
			rating = aRating;
			                        // This example creates an if statement that helps specify how "rating" is defined.
			else{
				rating = "NR";
			};
		};
		
		string getRating(){       // "Getter" - This getRating function returns a string variable which simply just tells you the value of the variable "rating"
			return rating;
		};
};

int main(){
	
	Movie avengers("Avengers", "Joss", "whatever");
	
	avengers.setRating("Dog");
	
	cout << avengers.getRating();
	
	
	
	
	
}