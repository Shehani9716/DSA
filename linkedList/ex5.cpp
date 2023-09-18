#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void append(node *&h, int value);
void print(node *h);


int main(){
	int number_of_elements; //in the beginning in the linked list
	
	cout <<"\nPointers : Insert a new node at the beginning ";
	cout <<"\n=================================================";
	
	cout <<"\nInput the number of nodes :";
	cin >>number_of_elements;
	
	node *head = NULL;
	
	for(int i=0; i<number_of_elements; i++){
		int value;
		cout << "Input data for node " << i+1 << " : ";
		cin >> value;
		append(head,value);	
	}
	print(head);
	
	int additional_node;
	cout << "\nInput data to insert at the end of the list : ";
	cin >> additional_node;
	append(head,additional_node);
	print(head);
	return 0;
}

void print(node *h){
	cout << "\nList : ";
	while(h != NULL){
		cout << h->data<< " ";
		h =h->next;
	}
}

void append(node *&h, int value){
	node *temp = new node;
	temp->data = value;
	temp->next =NULL;
	
	if(h==NULL){
		h=temp;
	}
	else{
		node *current= h;
		while(current->next != NULL){
			current=current->next;
		}
		current->next = temp;
	}
}


