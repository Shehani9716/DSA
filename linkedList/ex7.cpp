#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void print(node *h);
void append(node *&h, int element);
void deleteBeginNode(node *&h);

int main(){
int number_of_elements; //in the beginning in the linked list
	
	cout <<"\nPointers : Delete a node at the beginning ";
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
	
	cout << "\n\nAfter deleting the first node ";
	deleteBeginNode(head);

	print(head);
	
	return 0;
}

void append(node *&h, int element){
	node *temp = new node;
	temp->data = element;
	temp->next = NULL;
	
	if(h==NULL){
		h=temp;
	}
	else{
		node *current = h;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=temp;
	}
}

void deleteBeginNode(node *&h){
	node *temp = new node;
	temp= h;
	h=h->next;
	delete temp;	
}

void print(node *h){
	cout << "\nList : ";
	while(h != NULL){
		cout << h->data << " ";
		h=h->next;
	}
}
