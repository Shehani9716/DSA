#include <iostream>
using namespace std;

void MyFunc(int *head);

int main(){
	int myarr[] = { 12, 54, 45, 6, 23};
	MyFunc(myarr);
	
	return 0;
	
}

void MyFunc(int *head){
	cout << "\n The first element : "<< head[0];
	cout << "\n The second element : "<< head[1];
}
