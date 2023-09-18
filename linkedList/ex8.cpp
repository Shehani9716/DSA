#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void deleteMiddleNode(node* &h, int position);
void append(node *&h, int element);
void print(node *h);

int main(){
	int location, number_of_elements;
	cout <<"\nPointers : Delete a node at the middle ";
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
	
	cout << "\n\nInput the position of the node to delete : ";
	cin >> location;
	deleteMiddleNode(head,location);

	print(head);
	
	return 0;
}

void deleteMiddleNode(node* &h, int position){
	node *current = new node;
	node *previous = new node;
	
	current = h;
	for (int i=1; i<position; i++){
		previous = current;
		current = current->next;
	}
	previous->next=current->next;
	//delete current;
	//delete previous;
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


void print(node *h){
	cout << "\nList : ";
	while(h != NULL){
		cout << h->data << " ";
		h=h->next;
	}
}

