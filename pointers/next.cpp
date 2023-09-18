//sort an array using pointer
#include <iostream>
using namespace std;

int main(){
	int amount;
	int arr[amount];
	
	cout << "\nPointer : sort an array using pointer";
	cout << "\n=============================================";
	cout << "\n\nInput the number of elements to store in the array";
	cin >> amount;
	
	for (int i=0; i<=amount; i++){
		cout << "element-" << i+1 << " : ";
		cin >> arr[i];
	}
	
	
	return 0;
}

void print(int *h, int amount){
	cout << "\n The array is "
	for(int i=0; i<amount<<i++){
		cout << *h
	}
}
