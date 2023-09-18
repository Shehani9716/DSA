#include <iostream>
using namespace std;

int add2numbers(int *n1, int *n2);

int main(){
	int num1, num2;
	
	cout << "Input the first number : ";
	cin >>num1;
	cout << "Input the second number : ";
	cin >>num2;	
	
	cout << "\nThe sum of the enterd nubers is : "<<
		add2numbers(&num1, &num2);	
	
	return 0;
}

int add2numbers(int *n1, int *n2){
	int sum;
	
	sum = *n1 + *n2;
	return sum;
}
