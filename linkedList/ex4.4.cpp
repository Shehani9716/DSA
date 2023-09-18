#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void append(node *&h,int element);
void print(node *h);
void changeHead(node *&h, int element);

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
	
	int begin_node;
	cout << "\nInput data to insert at the beginning of the list : ";
	cin >> begin_node;
	changeHead(head,begin_node);
	print(head);
	return 0;
}

void print(node *h){
	cout << "\n\nList : ";
	while(h!= NULL){
		cout << h->data << "  " ;
		h=h->next;
	}
}

void append(node *&h,int element){
	node *temp = new node;
	temp->data = element;
	temp->next = NULL;
	
	if (h==NULL){
		h=temp;
	}
	else{
		node *current = h;
		while(current->next != NULL){
			current = current->next;
		}
		current->next=temp;
	}
}

void changeHead(node *&h, int element){
	node *temp = new node;
	temp->data = element;
	temp->next=h;
	h=temp;
}


