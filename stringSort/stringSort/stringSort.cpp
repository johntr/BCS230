/* John Redlich		BCS230 PM1		October 3, 2013
 * String Array sort with added string explode to support full sentences.	*/
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 15;	//const for array size. This sets out max words per sentence. 
void stringExplode(string& sentence, string words[]);
void stringSort(string words[]);
int main() {

	string sentence;		//varriable to store user sentence
	string words[SIZE];		//array to store exploded words

	// get data from user
	cout << "Please enter a sentence with at most 15 words." << endl;
	getline(cin, sentence); 
	
	stringExplode(sentence, words);			//explode string into array
	stringSort(words);						//sort words

	//output words
	cout << "Your sentence contained the following words in alpha order." << endl; 
	for (int k=0;k<SIZE; k++) {
		//check to see if array element has data in it	
		if(!words[k].empty()){
			
				cout << words[k] <<endl;		//output words
			}
	}
	system("pause");
	return 0;
}
//explodes string and puts words into an array
void stringExplode(string& sentence, string words[]) {

	string delimiter = " "; //set delimiter type
	int pos = 0;			//position int
	string word;			//string to store the word.
	int i=0;				//set i for array element

	//loop though to get the words.
	while ((pos = sentence.find(delimiter)) != string::npos) { 
		word = sentence.substr(0, pos); 
		words[i] = word;		//put substring into array element
		sentence.erase(0, pos + delimiter.length()); 	
		i++;
	}
	
	words[i] = sentence;		//input the rest of our string into the array
}
//function to sort string into Apha order based on ascii value.
void stringSort(string words[]) {

	string temp;			//create temp varriable

	//bubble sort
	for (int i=0;i < SIZE; i++) {
		for ( int j=0; i > j; j++) {
			if (words[i] < words[j]) {
				//sort words into place
				temp = words[i]; 
				words[i] = words[j];
				words[j] = temp;
			}
		}
	}
}