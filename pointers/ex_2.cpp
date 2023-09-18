#include <iostream>
using namespace std;

int main(){
	
	float *space = new float; 
		/*in the heap memory we	alloacte a location 
		that can hold a floating point value and we
		create a tread to a pointer in the stack.
		*/
	cout <<"Enter a value: ";
	cin>>*space;
	
	if(*space>50)
		cout <<"\nYou win!";
	else
		cout <<"\nYou lose";
		
	*space = 0;//here this code should be deleted using delete keyword.
	
	
	return 0;
}
