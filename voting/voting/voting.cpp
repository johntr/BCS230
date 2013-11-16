//John Redlich 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
//Write a program that allows the user to enter the last names of five candidatesin in a local election and the number of votes recived by each candidate. 
//The program should then output each candidate's name, the number of votes received, and the percentage of the total votes received by the candidate. 
//Your program should also output the winner of the election. 

int main() {
	//set varriables
	const int SIZE = 5; 
	string candidate[SIZE]; 
	int votes_received[SIZE];
	double votes_percent[SIZE];

	//get data from user
	for (int i=0; i<SIZE; i++) {
		cout << "Please enter the last name for canidate " << i+1 << ":";
		//getline(cin, candidate[i]); 
		cin >> candidate[i];
		cout << "Enter Candidate 3" << i+1 << " number of votes: ";
		cin >> votes_received[i]; 
	}

	//total votes
	int total = 0; 
	for (int i=0; i<SIZE; i++){
		total += votes_received[i]; 
	}

	//get percent of votes.
	for(int i=0;i<SIZE;i++){
		votes_percent[i]= (static_cast<double>(votes_received[i]) / static_cast<double>(total))* 100;
	}

	//find highest vote percentage
	string most_voted;
	double most_votes = votes_percent[0];

	for(int i=0;i<SIZE;i++){
		if(votes_percent[i] > most_votes) {
			most_votes = votes_percent[i];
			most_voted = candidate[i];
		}
	}

	//return data
	cout << setw(15)<<left << "Candidate Name" << setw(8) << "Votes"  << "Percent of Vote" <<endl;
	for( int i=0; i<SIZE; i++) {
		cout << setw(15) << left << candidate[i] << setw(8) << votes_received[i] << setw(5)<<right <<setprecision(4)<< votes_percent[i] <<endl;
	}
	cout <<endl<< "The total number of votes are: " << total << endl; 
	cout << "The winner is " << most_voted <<endl;


	system("pause");
	return 0; 
}