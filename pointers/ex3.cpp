#include <iostream>
using namespace std;

int main(){
	
	int m=300;
	float fx=300.600006;
	char cht = 'z';
	
	int *mptr = 0;
	float *fxptr = 0;
	char *chptr = 0;
	
	cout <<"\nPointer : Demonstrate the use fo & and * operator : ";
	cout <<"\n________________________________________________________";
	cout <<"\n\nUsing & Operater";
	cout <<"\n______________________";
	cout << "\n\tAddress of m = "<<&m;
	cout << "\n\tAddress of fx = "<<&fx;
	cout << "\n\tAddress of cht = "<<&cht;
	
	mptr=&m;
	fxptr=&fx;
	chptr=&cht;
	cout <<"\n\nUsing & and * operator";
	cout <<"\n___________________________";
	cout << "\n\tValue at address of m = "<<*(&m);
	cout << "\n\tValue at address of fx = "<<*(&fx);
	cout << "\n\tValue at address of cht = "<<*(&cht);
	
	cout <<"\n\nUsing only poiner variable";
	cout << "\n______________________________";
	cout << "\n\tAddress of m = "<<mptr;
	cout << "\n\tAddress of fx = "<<fxptr;
	cout << "\n\tAddress of cht = "<<chptr;
	
	cout <<"\n\nUsing only pointer operator";
	cout <<"\n_______________________________";
	cout << "\n\tValue at address of m = "<<*mptr;
	cout << "\n\tValue at address of fx = "<<*fxptr;
	cout << "\n\tValue at address of cht = "<<*chptr;
	
	
}
