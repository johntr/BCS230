#include <iostream> 
#include <iomanip>
#include <string> 
#include <fstream> 
using namespace std; 
//global data 
struct studentType { 
	string studentfName; 
	string studentlName; 
	double testScore; 
	char grade; 
}; 
const int SIZE = 5; 
//---------Declare functions
void getData(ifstream& inData, studentType student[]);
void calcualteGrade(studentType student[], const int SIZE);
void printResults(ofstream& outData, studentType student[], const int SIZE);
//--------Main Program
int main() { 

	ifstream inData; 
	ofstream outData; 

	studentType student[SIZE]; 

	inData.open("Ch9Ex2datain.txt"); 
	//check if input data is available
	if(!inData) { 
		cout << "Unable to open input file";
		system("pause");
		return 1;		
	}

	outData.open("StudentData.txt"); 
	//check to see if you are able to write data. 
	if(!outData) { 
		cout << "Unable to open file. Access Denied";
		system("pause");
		return 1; 
	} 
	getData(inData, student); 
	calcualteGrade(student, SIZE);
	printResults(outData, student, SIZE); 
	cout << "Data has been writen to file." <<endl;
	for(int i=0; i<SIZE;i++) { 
		cout << student[i].studentfName << " " << student[i].studentlName << " " << student[i].testScore << " " << student[i].grade << endl; 
	}

	system("pause");
	return 0; 
} 

void getData(ifstream& inData, studentType student[]){
	
	for(int i=0;i < SIZE; i++) {
		inData >> student[i].studentfName >> student[i].studentlName >> student[i].testScore;
		
	}
	inData.close();
}

void calcualteGrade(studentType student[], const int SIZE) {

	for(int i=0;i<SIZE;i++) {

		if(student[i].testScore >= 90) {
			student[i].grade = 'A'; 
		}
		else if(student[i].testScore >= 80) {
			student[i].grade = 'B'; 
		}
		else if(student[i].testScore >= 70) {
			student[i].grade = 'C'; 
		}
		else if(student[i].testScore >= 60) {
			student[i].grade = 'D'; 
		}
		else if(student[i].testScore < 60) {
			student[i].grade = 'F'; 
		}
	}
	 
}

void printResults(ofstream& outData, studentType student[], const int SIZE) {

	for(int i=0;i<SIZE;i++) {
		outData << setw(10) << student[i].studentfName << setw(10) << student[i].studentlName << setw(5) <<student[i].testScore << setw(3) << student[i].grade << endl; 
	}
	outData.close(); 
}