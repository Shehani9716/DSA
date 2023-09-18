#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

int main(){
	int number_of_elements;
	cout <<"\nPointers :creade and display a doubly linked list ";
	cout <<"\n=================================================";
	cout <<"\nInput the number of nodes :";
	cin >>number_of_elements;
	
	node* head; //start of the linked list
	node* tail; //end of the list.
	for(int i=0; i<number_of_elements; i++){
		int value;
		cout << "Input data for node " << i+1 << " : ";
		cin >> value;
		append(head,value);	
	}
	print(head);
		
	return 0;
}
