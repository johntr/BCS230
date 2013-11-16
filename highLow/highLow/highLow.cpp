//Program to find the highest and lowest number of an array
//John Redlich
//Headers
#include <iostream>

using namespace std;
//whatever its called when you declare your functions before your main
int findHighest(int num[], int SIZE);
int findLowest(int num[], int SIZE); 
//Const for size of an array. 
const int SIZE = 8;
int main() {
	 //initialize the array	
	int num[SIZE] = {2,3,8,4,7,5,1,6};
	//Call the functions
	cout << findHighest(num, SIZE) <<endl;
	cout << findLowest(num, SIZE) << endl;
	 //end
	system("pause");
	return 0; 

}
//find highest number in array
int findHighest(int num[], int SIZE){
	//set index 0 to varriable to check against
	int highest = num[0];
	 //loop though array and if number is greater than the number in our highest varriable make highest that index.
	for(int i=0; i < SIZE; i++) {
		if(num[i] > highest) {
			highest = num[i]; 
			
		}
	}
	//return highest number
	return highest;
}
//same as highest but for the lowest number
int findLowest(int num[], int SIZE){
	int lowest = num[0];
	 
	for(int i=0; i < SIZE; i++) {
		if(num[i] < lowest) {
			lowest = num[i]; 
			
		}
	}
	return lowest;
}