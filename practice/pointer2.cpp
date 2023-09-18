#include <iostream>
using namespace std;

int main(){
	int myAge = 40;
	int *pAge =0;
	pAge = &myAge;
	
	cout << "\n myAge: "<< myAge;
	cout << "\n Address of myAge: "<< &myAge;
	cout << "\n Size of myAge: "<< sizeof(myAge);
	cout <<"\n Value pointed by pAge: "<< pAge;
	cout << "\n Address of pAge: "<< &pAge;
	cout << "\nSize of pAge: "<< sizeof(pAge);
	
	int yourAge;
	yourAge= *pAge;
	cout << "\n \n value in YourAge: "<< yourAge;
	cout << "\n Address of yurAge: "<< &yourAge;
	cout << "\nSiseof yourAge: "<< sizeof(yourAge);
	
	int *newAge = 0;
	newAge= pAge;
	
	cout << "\n\nValue in newAge: "<< newAge;
	cout << "\nAddress of newAge: "<< &newAge;
	cout << "\n value pointed by newAge: "<< *newAge;
	cout << "\m Size of newAge: "<< sizeof(newAge);
	
	
	return 0;
}
