#include <iostream>
using namespace std;

int main(){
	int num1, num2, sum;
	int *n1= 0;
	int *n2= 0;
	
	n1 = &num1;
	n2 = &num2;
	
	cout << "Input the first number : ";
	cin >>num1;
	cout << "Input the second number : ";
	cin >>num2;	
	
	sum = *n1 + *n2;
	
	cout << "\nThe sum of the enterd nubers is : "<<sum;
	
//	delete n1;
//	delete n2;	
	
	return 0;
}
