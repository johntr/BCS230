#include <iostream> 
#include <fstream> 
#include <string> 
#include <iomanip> 
using namespace std; 

//basic read file data and write file data. 
int main() { 
	
	ofstream out; 
	out.open("Pres.txt"); 
	out << "Gerald Ford" << endl << "Harry Truman" << endl << "Ronald Regan"; 
	out.close(); 
	
	ifstream in; 
	in.open("Pres.txt"); 
	string pres1,pres2,pres3;
	getline(in,pres1);
	getline(in,pres2); 
	getline(in,pres3); 
	cout << pres1 << endl << pres2 <<endl << pres3 <<endl; 
	in.close();

	system("pause");
	return 0; 
}