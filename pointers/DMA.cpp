//dynamic memeory allocation

#include <iostream>
using namespace std;

int main(){
	int size;
	int *ptr;
	
	cout << "Enter the number of values you want to store : ";
	cin >> size;
	
	cout << "\nEnter the values accordingly \n";
	ptr= new int [size]; //dynamic memory allcation. 
	
	for(int i=0; i<size; i++){
		cout << "Enter the value "<< i+1 << "\t: ";
		cin >> ptr[i];
	}
	
	cout << "\n\nThe values are : ";
	for(int i=0; i<size; i++){
		cout<< ptr[i]<< "\t";
	}
	return 0;
}
