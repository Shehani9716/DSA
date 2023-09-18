//sort an array using pointer
#include <iostream>
using namespace std;

void print(int *h, int amount);
void sort_array(int *h, int amount);

int main(){
	int amount;
	int arr[amount];
	
	cout << "\nPointer : sort an array using pointer";
	cout << "\n=============================================";
	cout << "\n\nInput the number of elements to store in the array : ";
	cin >> amount;
	
	for (int i=0; i<amount; i++){
		cout << "element-" << i+1 << " : ";
		cin >> arr[i];
	}
	
	print(arr, amount);
	
	cout << "\n__________after sorting the array_________\n";
	
	sort_array(arr, amount);
	print(arr, amount);
	return 0;
}

//method to print an array
void print(int *h, int amount){
	cout << "\n The array is : ";
	for(int i=0; i<amount; i++){
		cout << *h <<"\t" ; 
		h++;
	}
}

//method to sort an array
//sort should done in ascending order
void sort_array(int *h, int amount){
	
	for(int i=0; i<amount; i++){
		for(int j=0; j<amount-i-1; j++){
			if(*(h+j)>*(h+(j+1))){
				int temp = 0;
				temp =*(h+j);
				*(h+j)=*(h+(j+1));
				*(h+(j+1))= temp;
			}
		}
	}
}




