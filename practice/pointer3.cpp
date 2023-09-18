#include <iostream>
using namespace std;

int main(){
	int num = 10;
	int *mynum = &num;
	
	cout << " The value of number is : "<< num;
	*mynum = 65;
	cout << " \n After changing the value of the number is : "<<num;
	*mynum = num + num;
	cout << " \n The third value is : " << num;
	*mynum = num* num;
	cout << " \n The forth value is : "<< num;
	
	return 0;
}
