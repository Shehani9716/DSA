#include <iostream>
using namespace std;

void printArray(int Arr[], int size);
void merge(int arr[], int l, int mp, int r);
void mergeSort(int arr[], int l, int r);

int main(){
	int n =20;
					//0				//10
	int array[n] = {17,16,9,14,6,12,7,15,19,20,5,11,1,8,3,2,13,4,10,18};

	cout <<endl;
	printArray(array , n);
	mergeSort(array,0,(n-1));
	cout << "\nAfter merge sorting : ";
	printArray(array, n);
	
	return 0;
}


void merge(int arr[], int l, int mp, int r){
	int i, j, k;
	int n1 = mp-l+1; //size of left array
	int n2 = r-mp;	//size of the right array
	
	//creating temporary arrays
	int leftArr[n1]; //creating the left array
	int rightArr[n2]; // creating the right array
	
	// copy data to temp arrays left and right
	for(i=0; i<n1; i++){
		leftArr[i]= arr[l+i];
	}
	for(j=0; j<n2; j++){
		rightArr[j]= arr[mp+j+1];
	}

	cout<< "\nleft : ";
	printArray(leftArr, n1);
	cout<< "right: ";
	printArray(rightArr, n2);
	//the arrays have created successfully. 
	// now we have to merge teh temp arrays back into arr[
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}




void mergeSort(int arr[], int l, int r){
	if (l<r){
		int mp = (l+r)/2;		//5\10
		//sort the left half
		mergeSort(arr, l, mp); 		//5+0/2=2
		cout << "\ms1";
		//sort the right half
		mergeSort(arr, mp+1, r);	//6+10/2=8
		cout << "\ms2";
		merge(arr, l, mp, r);
		cout << "\ms3";
	}
	
	cout << "\nMergesort";
}

void printArray(int Arr[], int size){
	for(int i=0; i<size; i++){
		cout << Arr[i]<< " ";
	}
	cout << endl;
}



