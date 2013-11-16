#include <iostream>
#include <string>
using namespace std; 

struct fruitType {
	string name; 
	string color; 
	int fat;
	int sugar; 
	int carbo; 
};

void main() { 

	fruitType fruit; 

	cout << " Please enter the following data about your fruit: " << endl; 
	cout << "Fruit name: ";
	cin >> fruit.name; 
	cout << "Fruit color: ";
	cin >> fruit.color; 
	cout << "Fruit fat content: ";
	cin >> fruit.fat;
	cout << "Fruit surgar content: ";
	cin >> fruit.sugar; 
	cout << "Fruit carbohydrate content: ";
	cin >> fruit.carbo ;
	cout << endl;

	cout << "The fruit you entered was a(n) " << fruit.name << " it is the color " << fruit.color << ". It has the following nutrition facts. Fat: " << fruit.fat << ", Sugar: " <<
		fruit.sugar << ", Carbohydrates: " << fruit.carbo <<endl; 

	system("pause"); 
}