#include <iostream> 
#include <string> 
using namespace std; 

//Create Movie struct with name of movie, year it was made, its runtime and the number of stars it got. 
struct Movie {
	string name; 
	int year; 
	int runTime; 
	double stars; 
};
int main() {

	//initalize movie array object
	Movie DVD[] = { {"Airplane!", 1980, 150, 3.5}, {"Old School", 2003, 120, 3.3}, {"Up", 2010, 124, 4.0}, {"Big", 1984, 100, 3.7}};
	const int SIZE = 4; 

	//loop though array and display elements in text output. Runs while less than the SIZE of array. 
	for (int i=0; i<SIZE; i++) {
		cout << "The movie " << DVD[i].name << " was made in " << DVD[i].year << " its runtime is " << DVD[i].runTime << " and it got " << DVD[i].stars << "!" << endl; 
	}

	system("pause");
	return 0; 
}
