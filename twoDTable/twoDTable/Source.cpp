#include <iostream> 
#include <iomanip>
using namespace std; 


int main() { 

	int table[3][4] = {{4,7,-2,3}, {1,11,4,2}, {6,6,9,0}};
	int sum =0; 
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout << setw(5) << table[i][j]; 
			sum += table[i][j]; 
		}
		cout << endl; 
	}
	cout << "The sum of the numbers in that array is: " << sum << endl; 
	system("pause"); 
	return 0; 
}