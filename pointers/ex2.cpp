#include <iostream>
using namespace std;

int main(){
	int m = 29;
	int *ab = 0;
	
	cout << "\nAddress of m : " <<&m;
	cout << "\nValue of m	: " <<m;
	
	ab = &m;
	cout << "\n\nNow ab is assigned with the address of m.";
	cout << "\nAdress of pointer ab : "<< &ab;
	cout << "\nContent of pointer ab : "<< ab;
	
	m=34;
	cout << "\n\n The value of m assigened to 34 now";
	cout << "\nAddress of pointer ab : "<< &ab;
	cout << "\nContent of pointer ab : "<<ab;
	
	*ab=7;
	cout<< "\n\nThe pointer variable av is assigned with the value 7 now";
	cout << "\nAddress of m : "<< &m;
	cout << "\nValue of m : "<< m;
}
