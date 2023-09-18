#include <iostream>
using namespace std;

int main(){
	float *space = new float;
	cout << " \n Enter a value ";
	cin >> *space;
	
	if(*space >50 )
		cout << "\n You have win!";
	else 
		cout << " \n You loose. ";
	
	*space =0;
	
	return 0;
	
	
}
