#include <iostream>
using namespace std;

void reverseArr(int* h, int number);

int main(){
	int n; //number of elements in the array
	cout << "\nPointer : sum of array.";
	cout << "\n===============================================";
	cout <<"\nInput the number of elements (max=10) : ";
	cin>> n;
	cout <<"\nInput n number of elements in the array\n";
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cout << "element - "<<i+1<<" : ";
		cin >> arr[i];
	}
	
	cout << "\n\nThe elements of array in reverse order are : \n";
	reverseArr(arr,n);
	
	
	return 0;
}


void reverseArr(int* h, int number){
	for(int i=number; i>0; i--){
		cout << "\nelement - " <<i<<" : "<< *(h+i-1); //3-11 2-

	}
}






