#include <iostream>
using namespace std;

int main(){
	
	
	int m=10;
	int n, o;
	int *z = 0;
	cout << "\nPointer : Show the vasi declaration of pointer";
	cout << "\n___________________________________________________";
	cout << "\n\nHere is m= 10, n and o are two interger variable and *z is an interger";
	cout << "\nZ stores the address of m = ";
	z=&m;
	cout <<z;
	
	cout <<"\n*z stores the value of m = " << *z;
	cout << "\n&m is the address of m = "<< &m;
	cout << "\n&n stores the address of n = "<< &n;
	cout << "\n&o stores the address of o = "<< &o; 
	cout << "\n&z stores the address of z = "<<&z;
	return 0;
}
