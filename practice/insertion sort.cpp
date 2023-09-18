  //insertions sort
//till the unsorted subject becomes null

#include <iostream>

using namespace std;

int main(){
	
	int arr[] = {7, 8, 9, 5, 2, 3};

	for (int i=1; i<6; i++){
		int key = arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]= arr[j];
			j= j-1;
		}
		arr[j+1]=key;
	}
	
	for(int i=0; i<6; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
