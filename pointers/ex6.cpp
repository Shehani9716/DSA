#include <iostream>
using namespace std;


int main(){
	int num1, num2;
	int *n1= 0;
	int *n2= 0;
	
	n1 = &num1;
	n2 = &num2;
	
	
	cout << "Input the first number : ";
	cin >>num1;
	cout << "Input the second number : ";
	cin >>num2;	
	
	if(*n1 > *n2){
		cout << endl<<*n1 << " is the maximum number";
	}
	else if(*n2>*n1){
		cout << endl<<*n2<< " is the maximum number";
	}
	else
		cout << "\nThe numbers are same!";
		
	return 0;
}
