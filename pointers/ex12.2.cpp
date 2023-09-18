//calculatig factorial using pointer

#include <iostream>
using namespace std;

void fact(int no, int *f);

int main(){
	int number;
	int fac;
	
	cout << "\nInput a number : ";
	cin >> number;
	cout<< "The factorial is : ";
	fact(number, &fac);

	return 0;
}

          
void fact(int no, int *f){
	*f = 1;
	for(int i=1; i<=no; i++){
		*f=*f*i;
	}
	cout << *f;
}
