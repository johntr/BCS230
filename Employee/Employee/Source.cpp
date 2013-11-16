#include <iostream>
#include <string>
using namespace std; 

//declaration section of class
class Employee{
	private:			//only member functions can access these varriables
		int id;
		string name; 
		string SocSec; 
		double salary;	

	public: 
		void display();		//Class method
		Employee(int, string,string,double);			//Constructor 
		void setSalary(double);			//mutator function
		int getId(); 
};
//implementation section
void Employee::display() {
	cout<< "Name: " << name <<endl << "Salary: "<< salary <<endl; 
}
//constructor definition
Employee::Employee(int idNum, string empName, string empSSN, double empSalary){
	id = idNum; 
	name = empName; 
	SocSec = empSSN;
	salary = empSalary; 

}
//mutator function - changes the value of the data member
void Employee::setSalary(double s){

	salary = s; 
}
//an accessor method returns private data members. 
int Employee::getId(){
	return id; 
}
void main() {

	Employee emp1(1,"John", "098783452", 56000.76) ;		//instancated an employee object

	emp1.display(); 
	cout << "Now lets give him a raise" << endl;
	emp1.setSalary(60000);
	emp1.display(); 
	cout <<"His id is " << emp1.getId() <<endl; 
	system("pause");
}