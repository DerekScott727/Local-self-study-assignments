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
			setRating(aRating);
		};
		
		void setRating(string aRating){
			if (aRating == "E" || aRating == "PG" || aRating == "PG-13" || aRating == "R")
			rating = aRating;
			
			else{
				rating = "NR";
			};
		};
		
		string getRating(){
			return rating;
		};
};

int main(){
	
	Movie avengers("Avengers", "Joss", "whatever");
	
	avengers.setRating("Dog");
	
	cout << avengers.getRating();
	
	
	
	
	
}