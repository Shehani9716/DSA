//insertion sort

#include <iostream>
#include <iomanip>

using namespace std;


int main(){

	int num;
	int myarr[num];
	
	//input array elements from the user.
	cout << "Enter the number of elements to be sorted : ";
	cin >>num;
	cout << "Enrer " <<num <<" integers in any order"<< endl;
	for(int i=0; i<num; i++){
		cin >> myarr[i];
	}
	
	cout << "\n Before Sorting \t : ";
	for(int i=0; i<num; i++){
		cout<<  myarr[i] << "\t";
	}
	//sorting
	int j=0;
	int temp;
	
	
	for(int i=1; i<num; i++){
		temp = myarr[i];
			j=i-1;
	while (j<0 && myarr[j]>temp){
			myarr[j+1] = myarr[j];
			j=j+1;
		}
		myarr[j+1]=temp;
	}
	
	
	cout << "\n After Sorting \t : ";
	for(int i=0; i<num; i++){
		cout<<  myarr[i] << "\t";
	}	
}

