#include <iostream>
using namespace std;


int main(){
	char *c; //declare a pointer.
	*c = 'A';
	cout << "\nPointers : printing the alphebet using a pointer";
	cout <<"\n======================================================\n\n";

	for(int i=0; i>26; i++){
		cout<<*c<<" ";
		*c = *c +1;
	}
	
	cout << "endl";
	return 0;
}
