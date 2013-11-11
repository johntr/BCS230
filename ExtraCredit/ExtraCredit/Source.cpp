
/* p587 Ex. 11 largeIntegers.cpp
array of 20 elements. each element is a place in a large number. add 2 of them together in array. 
John Redlich
*/ 
#include <iostream>
using namespace std; 

void main() {
	const int size = 20; //array size
	int num1[size] = {0,0,0,0,0,0,0,0,0,0,0,6,2,6,2,7,3,5,4,6} ;		//number 1
	int num2[size] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,4,6,7};			//number 2
	//start at end of array and work backwards. 
	for (int i=size-1; i >= 0; i--) {
		//Only do addition if there is a number to add against. 
		if(num1[i] >0){
			//add array elements together
			num1[i] = num1[i] + num2[i]; 
			//if place is greater than 10 add 1 to next number. 
			if (num1[i] >= 10) {
				//subtract 10 make it a single digit
				num1[i] -=10;
				num2[i-1] += 1;  //add 1 to next place
			}
		}
	}	
	//output added number. 
	for (int j=0; j<size; j++) {
		cout << num1[j];
	}
	system("pause");
}