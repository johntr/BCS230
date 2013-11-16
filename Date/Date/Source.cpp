#include <iostream> 
#include <string>
using namespace std; 

class Date{
private:
	int month,day,year;
public: 
	Date(int,int,int);
	void display(); 
	void setDate(int,int,int);
	Date();

};

Date::Date(int m,int d,int y) {

	month = m;
	day = d;
	year = y;
}
void Date::display() { 
	cout << "Todays date is "<< month << "/" << day << "/" << year%100 <<endl; 
}
void Date::setDate(int m, int d, int y) {
	month =m; 
	day =d;
	year = y;
}
Date::Date(){
month = 1;
day= 1;
year = 1970;
};



void main() { 

	Date today(10,24,2010);
	Date tomorrow; 
	tomorrow = today; 

	tomorrow.setDate(4,28,1988);
	tomorrow.display(); 
	today.display(); 
	today.setDate(4,11,1983);
	today.display();
	system("pause");
}