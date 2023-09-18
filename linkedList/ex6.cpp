#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void print(node *h);
void append(node *&h, int element);
void nodeMiddle(node *&h, int element, int position);

int main(){
	int number_of_elements; //in the beginning in the linked list
	
	cout <<"\nPointers : Insert a new node at the middle ";
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
	
	int additional_node, location;
	cout << "\nInput data to insert at the end of the list : ";
	cin >> additional_node;
	cout << "Input the position to insert new node : ";
	cin >>location;
	nodeMiddle(head,additional_node, location);
	print(head);
	
	
	return 0;
}

void append(node *&h, int element){
	node *temp = new node;
	temp->next = NULL;
	temp->data = element;
	
	if (h==NULL){
		h=temp;
	}
	else{
		node *current = h;
		while(current->next != NULL){
			current= current->next;
		}
		current->next=temp;
	}
}

void print(node *h){
	cout << "\nList : ";
	while(h !=NULL){
		cout << h->data<<" ";
		h=h->next;
	}
}

void nodeMiddle(node *&h, int element, int position){
	node *temp= new node;
	temp->next = NULL;
	temp->data = element;
	
	node *current = h;
	for(int i=0; i<position-2; i++){
		current=current->next;
		
	}
	temp->next=current->next;
	current->next=temp;
}




