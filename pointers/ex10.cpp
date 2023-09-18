#include <iostream>
using namespace std;

int calculateLength(char *ch);

int main(){
	char arr[100];
	
	cout << "\nInput a String : " ;
	cin >> arr;
	
	cout << "The length of the string is : " << calculateLength(arr);
}

int calculateLength(char *ch){
	int counter;
	
	while (*ch != NULL){
		counter++;
		ch++;
	}
	return counter;
}
