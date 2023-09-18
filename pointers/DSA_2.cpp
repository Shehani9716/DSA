#include <iostream>
using namespace std;

int main(){
	
	int *myptr = new int;
	*myptr = 45; //value at the location pointed by myptr = 45
	
	cout<< "The value at the location poited by myptr is "<< *myptr;
	
	delete myptr;	
	
	return 0;
}
