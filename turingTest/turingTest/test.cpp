#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 
string displayRandom();
void main() {

	string responce, timmy; 
	cout << " Let's talk" <<endl; 

	while(responce != "Goodbye") {
		
		getline(cin, responce);

		if (responce == "Hello") {
			cout << "Hi.";
		}
		else if (responce == "What's your name?"){
			cout << "My name is bob.";
		}
		else 
			cout << displayRandom() <<endl; 
	}
		 system("pause");
}

string displayRandom()
	{
		switch(rand() % 3) 
		{
		case 0: 
			return "Who will win the Giants game?";
			break;
		case 1: 
			return "I like cars!";
			break;
		case 2:

			return "I don't know";
		
		}
}