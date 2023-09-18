#include <iostream>
using namespace std;

//a utility function to swap two elements
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high){
	//make the last element as pivot element
	int pivot = arr[high];
	int i = low -1;
	
	for(int j= low; j<high; j++){
		//check whether the current element is smaller than the pivot
		if(arr[j]<pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	//place the pivot element in its position.
	swap(&arr[i+1], &arr[high]); 
	return (i+1);
}

//control over the recursive steps
void quickSort(int arr[], int low, int high){
	if(low<high){
		int partition_index = partition(arr, low, high);
		quickSort(arr, low, partition_index-1);
		quickSort(arr, partition_index+1, high);
	}
}


int main(){
	int arr[] = {10, 7, 8,9,1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "\nBefore sorting : ";
	for(int i=0; i<n; i++){
		cout << arr[i]<< " ";
	}
	cout << endl;
	
		
	quickSort(arr, 0, n-1);
	
	cout << "\nAfter sorting : ";
	for(int i=0; i<n; i++){
		cout << arr[i]<< " ";
	}
	cout << endl;
	return 0;
}
