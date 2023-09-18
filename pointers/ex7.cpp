#include <iostream>
using namespace std;

int main(){
	int ele, number;
	int *ptr = 0;
	int arr[ele];
	cout << "\nInput the number of elements to store in the array : ";
	cin >>ele;
	
	cout << "\nInput "<< ele << " number of elements in the array. "<<endl;
	//to input array elements
	for(int i=0; i<ele; i++){
		cout << "element-"<<i<<" : ";
		cin >> number;
		arr[i]=number;
	}
	
	cout << "\nThe elements you entered are : ";
	
	for(int i=0; i<ele; i++){
		cout << "\nelement-"<<i<<" : 	" <<arr[i];
	}
}
