//calculatig factorial using pointer

#include <iostream>
using namespace std;

int fact(int no, int *f);
void fact(int no, int *f);

int main(){
	int number;
	int fac;
	
	cout << "\nInput a number : ";
	cin >> number;
	cout<< "\nThe factorial is : ";
	int k=fact(number, &fac);
	cout << k;
	return 0;
}


int fact(int no, int *f){
	*f = 1;
	for(int i=1; i<=no; i++){
		*f=*f*i;
	}
	return *f;
}
