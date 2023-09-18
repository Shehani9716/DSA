#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

void append_dl(node* &h, int element);
void print(node *h);
void reverseList(node *h);

int main(){
	node *head = NULL;
	int number_f_elements;
	cout << "\nDoubly Linked list (DDL)";
	cout << "\nCreate a DDL in reverse order";
	cout << "\n=========================================";
	
	cout << "\n\nInput the number of nodes : ";
	cin >> number_f_elements;
	cout << endl;
	
	// for loop for data input
	for(int i=0; i< number_f_elements; i++){
		cout << "input data for node "<< i+1 << " : ";
		int value;
		cin >> value;
		append_dl(head, value);
	}
	print(head);
	
	reverseList(head);
	
	return 0;
}

void append_dl(node* &h, int element){
	node* temp= new node;
	temp->data = element;
	temp->next = NULL;
	temp->prev = NULL;
	
	if(h == NULL){
		h= temp;
	}
	else {
		node* current = h;
		while(current->next != NULL){
			current = current->next;
			current->prev = current;
		}
		current->next = temp;
		temp->prev = current;
	}
}

void print(node *h){
	cout << "\nlist : ";
	while(h != NULL){
		cout << h->data<< " ";
		h=h->next;
	}
}

void reverseList(node *h){
	node *temp1 = h; 
	node *temp2 = temp1->next;
	
	temp1->next = NULL;
	temp1->prev = temp2;
	
		while (temp2 != NULL){
		temp2->prev = temp2->next;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp2->prev;
	}
	h = temp1;
	
	cout << "\nLinked list after reversed";
	print(h);
}
