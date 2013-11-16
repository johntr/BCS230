#include <iostream> 
#include <string> 
#include <cstring>
using namespace std; 


void main() { 

	string str1 = "I want a macbook!"; 
	string str2 =  "maybe tomorrow!";
	string str3;
	int find, end;

	find = str1.find("macbook");
	end = str1.find("!");
	str3 = str1.substr(find, end); 
	
	cout << find <<endl << str3 <<endl; 
	str1.swap(str3); 
	cout <<str3 <<endl;
	cout << str3.length()<<endl;

	int matrix[3][2];

	for(int i=0; i<3;i++) {
		for (int j=0; j<2;j++){
			 matrix[i][j] = i+j;
			 cout << matrix[i][j];
		}
		cout << endl;
	}

	char whatever[15]; 
	whatever = "Do the thing"; 

	system("pause"); 



}