#include <iostream>
using namespace std;

int getMax(int *head);

int main(){
	int myarr[]= {12, 34, 54, 28, 76};
	cout << "the max is : "<< getMax(myarr);
	
	return 0;	 
}

int getMax(int *head){
	int max = 0;
	for (int i= 0; i<5; i++){
		if (head[i]>max)
			max=head[i];
	}
	return max;
}
