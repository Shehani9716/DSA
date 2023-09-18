//arrays as pointers

#include <iostream>
using namespace std;

int GetMax(int *head);

int main(){
	int Arr[]= {12,33, 43,54,28,76 };
	cout << "\n The max number is : "<< GetMax(Arr);
	
	return 0;
}

int GetMax(int *head){
	int max=0; 
	for (int i=0; i<6; i++)
		if (head [i] >max)
			max =head[i];
			
	return max;
}
