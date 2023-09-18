#include <iostream>
using namespace std;

int main(){
	int num1, num2, sum;
	
	cout << "Input the first number : ";
	cin >>num1;
	cout << "Input the second number : ";
	cin >>num2;	
	
	sum = *(&num1)+*(&num2);
	
	cout << "\nThe sum of the enterd nubers is : "<<sum;	
	
	return 0;
}
