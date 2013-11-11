#include <iostream>
#include <cstring> 

using namespace std; 

int main() {
	//create array to store string
	char ch[81];
	//get input from user
	cout << "Please enter a sentence at most 80 characters long: "<< endl;
	cin.get(ch,80); 
	//loop though cstring and change each element to uppper and output. 
	for (int i=0; i < strlen(ch); i++) {
		//putchar (toupper(ch[i])); --- This works but we haven't learned it yet. 
		cout << (char) toupper(ch[i]); 
	}

	//return your integer. 
	system("pause");
	return 0; 
}