#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[n]= {8, 23, 76, 4, 72};
	
	int min_idx;
	
	for(int i=0; i<n-1; i++){
		min_idx = i;
		
		for(int j=i+1; j<n; j++){
			if(arr[j]>arr[min_idx]){			
				min_idx = j;
				int temp = arr[min_idx];
				arr[min_idx]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(int k=0; k<5; k++){
		cout<< arr[k]<< " ";
	}
	return 0;
}
