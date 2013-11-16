//John Redlich
/*Write a C++ function, smallestIndex, that takes as parameters an int
array and its size and returns the index of the first occurrence of the smallest
element in the array. Also, write a program to test your function. */
//headers
#include <iostream>

using namespace std;
int getsmallestIndex(int num[], int SIZE); 
int main() { 
	//cont for array size
	const int SIZE = 5; 
	//initalize array
	int num[SIZE] = {3, 5,1,5}; 
	//output smallest index
	cout << "The smallest index is: " << getsmallestIndex(num, SIZE); 
	system("pause"); 
	return 0;
}

int getsmallestIndex(int num[], int SIZE) {
	//varriable to store lowest index
	int lowest; 
	//loop though and find the number that is lowest and return the index. 
	for(int i = 0; i < SIZE; i++) {
		if(num[i] < num[i+1]) {
			lowest = i; 
		}
	}
	return lowest; 
}