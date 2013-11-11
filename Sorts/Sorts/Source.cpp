#include <iostream>
using namespace std;
const int length = 10; 
int bubbleSort(int unsorted[]);
int selectionSort(int unsorted[]);
int main() {

	int unsorted [] = { 5, 4, 6, 9, 1, 7, 2, 8, 3, 10};
	//int s; 
	int sort_type;

	cout << "Which sort would you like to use?" << endl << "1)Bubble Sort " << endl << "2)Selection Sort " << endl << "Please choose (1,2) " << endl << ">";
	cin >> sort_type;
	
	switch(sort_type) {
		case 1: 
			//cout << "running bubble sort";
			bubbleSort(unsorted);
		break;
		case 2:
			selectionSort(unsorted);
		break;
		default: cout << "You must choose from the list!";
		}

	


	system("pause");
	return 1;
}

int bubbleSort(int unsorted[]) {
	int i, j,s; 

	for(i=0;i<=9;i++)
	{
		for(j=0;j<i;j++)
		{
			
			if (unsorted[i] > unsorted[j]){
				int temp;
		
				temp = unsorted[i];
				unsorted[i] = unsorted[j];
				unsorted[j] = temp;
				//cout << unsorted[i] <<endl;
			}
		}
	}
		for (s=0;s<=9;s++){
		cout << unsorted[s] <<", ";
	}
		return 1;
	/* TEACHERS METHOD 
	int temp;   
	for(int pass=0; pass < length-1; pass++)
		for(int i=pass+1; i <length; i++)
			if (a[pass] > a[i]) 
	*/

}

int selectionSort(int unsorted[]) {
	int temp; 
	for(int pass=0; pass < length-1; pass++) {
		cout << "Pass " << pass << endl;
		for(int i=pass+1; i < length ; i++) {
			cout << "Comparing " << unsorted[pass] << " to " << unsorted[i] <<endl; 
			if( unsorted[pass] > unsorted[i]) {
				temp = unsorted[i]; 
				unsorted[i] = unsorted[pass]; 
				unsorted[pass] = temp; 
			}
		}
	}
	for (int s=0;s<length;s++){
		cout << unsorted[s] <<", ";
	}
	cout << endl << "Using Selection Sort" << endl; 
	return 2; 
}