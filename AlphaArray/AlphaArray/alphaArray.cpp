#include <iostream>
#include <iomanip>

using namespace std; 
//John Redlich page 584 Prog Ex. 1
/* Write a C++ program that declares an array alpha of 50 components of type
double. Initialize the array so that the first 25 components are equal to the
square of the index variable, and the last 25 components are equal to three times
the index variable. Output the array so that 10 elements per line are printed.  */

//Honestly I have no clue what we needed to do for this program so I just copied what was on the board. 

void initialize(double list[], int size);
void print(double list[], int size); 

int main() {

	double alpha[50]; 

	initialize(alpha, 50); 
	print(alpha, 50); 
	system("pause"); 
	return 0; 
}

void initialize(double list[], int size) {
	int count; 

	for(count = 0; count < 25; count++) {
		list[count] = count *count; 
	}
	 for( count = 25; count < size; count++) { 
		list[count] = 3 * count; 
	 }
}

void print(double list[], int size) {
	int count; 

	for(count =0; count < size; count++){
		cout << setw(4) << list[count] << " ";
		if((count+1) % 10 ==0) 
			cout << endl; 
	}
	cout <<endl;
}

