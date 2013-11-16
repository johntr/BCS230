#include <iostream>
#include <string>
using namespace std; 

void getWord(string& sent); 
int main() { 

	string sent; 

	//Get sentence 
	cout << "Please enter a sentence: " << endl; 
	getline(cin, sent); 

	cout << "here is your sentence: " << sent << endl; 
	//call function to output words of sentence. 
	getWord(sent); 

	system("pause");
	return 0; 
}

void getWord(string& sent) {
	//set delimiter type
	string delimiter = " "; 
	//position int
	int pos = 0; 
	//string to store the word. 
	string word; 
	//loop though to get the words.
	while ((pos = sent.find(delimiter)) != string::npos) { 
		word = sent.substr(0, pos); 
		cout << word << endl;
		sent.erase(0, pos + delimiter.length()); 
		
	}
	cout << sent << endl; 
}