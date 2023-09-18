//function returning a pointer

#include <iostream>
using namespace std;

int* findMax(int *a, int *b);

int main(){
	int num1, num2;
	
	cout << "\nPointer : function to return a pointer.";
	cout << "\n===============================================";
	cout << "\n\nInput the first number : ";
	cin>>num1;
	cout << "\nInput the second number : ";
	cin >>num2;
	
//	int *k=findMax(&num1,&num2);
//	cout << "\nThe largest number is : " << *k;	
	cout << "\nThe largest number is : " << *findMax(&num1,&num2);
	
	return 0;
}

int* findMax(int *a, int *b){
	if(*a>*b){
		return a;
	}
	else{
		return b;
	}
}
