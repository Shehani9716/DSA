#include <iostream>
//insertion sort implementation
using namespace std;

int main(){
	
	int arr[5] = {98, 78, 54, 22, 45};

	for(int i=0; i<5; i++){
		int key = arr[i];
		int j = i-1;
	
		while(j>=0 && arr[j ]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
		
	for(int i=0; i<5; i++){
		cout << arr[i]<< " ";
	}
	return 0;
}


