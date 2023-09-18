#include <iostream>
using namespace std;

int sumOfArr(int* h, int number);

int main(){
	int n; //number of elements in the array
	cout << "\nPointer : sum of array.";
	cout << "\n===============================================";
	cout <<"\nInput the number of elements (max=10) : ";
	cin>> n;
	cout <<"\nInput %d number of elements in the array\n", n;
	
	int arr[n];//array to store the elements
	
	//get input from the user
	for(int i=0; i<n; i++){
		cout << "element - "<<i+1<<" : ";
		cin >> arr[i];
	}
	
	cout << "\n the sum of array is : " << sumOfArr(arr,n);
	return 0;
}

int sumOfArr(int* h, int number){
	int sum;
	
	for(int i=0; i<number; i++){
		sum = sum + *(h+i);
	}
		
	return sum;	
}



