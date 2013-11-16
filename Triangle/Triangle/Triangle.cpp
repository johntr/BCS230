#include <iostream>

using namespace std;

enum triangleType {SCALINE, ISOSCELES, EQUILATERAL, noTriangle};
triangleType triangleShape(double side1, double side2, double side3);
void printShape(triangleType triangle);
int main() {

	double side1, side2, side3; 
	triangleType results; 

	cout << "Please enter side one of your triangle: ";
	cin >> side1;
	cout << endl << "Please enter side two of your triangle: "; 
	cin >> side2; 
	cout << endl << "Please enter side three of triangle: ";
	cin >> side3; 

	results = triangleShape(side1, side2, side3); 
	printShape(results); 

	return 0;
}


	triangleType triangleShape(double side1, double side2, double side3) {

		if (side1 == side2 && side2 == side3) 
			return EQUILATERAL; 
		else if ((side1+ side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
			if(side1 == side2 || side2 == side3 || side1 == side3) 
				return ISOSCELES; 
			else 
				return SCALINE; 
		else return noTriangle; 
	
}
	void printShape(triangleType triangle){
		switch (triangle) {
		case 0: 
			cout << "SCALINE" <<endl;
			break; 
		case 1: 
			cout << "ISOSCELES" <<endl;
			break;
		case 2: 
			cout << "EQUILATERAL" <<endl;
			break;
		case 3:
			cout << "That is not a vaid triangle type" <<endl; 
			break;
		}
		system("pause"); 
	}