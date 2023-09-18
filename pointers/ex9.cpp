#include <iostream>
using namespace std;

int main(){
	int ele, number;
	int max;
	int arr[ele];
	cout << "\nInput the number of elements(1 to 100) : ";
	cin >>ele;
	
	//input data
	for(int i=0; i<ele; i++){
		cout << "number "<<i<<" : ";
		cin >> number;
		arr[i]=number;
	}
	
	//find the max
	for(int i=0; i<ele; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
		
	cout << "The largest element is : "<< max;
	
	return 0;
}
