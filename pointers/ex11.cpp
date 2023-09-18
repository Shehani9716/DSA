#include <iostream>
using namespace std;

void swap(int *a, int *b, int *c);

int main(){
	int num1, num2, num3;
	int temp;
	
	cout << "\nThe value before swapping are : \n";
	cout << "element 1 : " ;
	cin >> num1;
	cout << "element 2 : " ;
	cin >> num2;
	cout << "element 3 : " ;
	cin >> num3;
	
	swap(&num1, &num2, &num3);
	
	cout << "\nelement 1 : " << num1;
	cout << "\nelement 2 : " << num2;
	cout << "\nelement 3 : " << num3;
	
	return 0;
}

void swap(int *a, int *b, int *c){
	int temp;
	temp = *c;
	*c=*a;
	*a=*b;
	*b=temp;
}
