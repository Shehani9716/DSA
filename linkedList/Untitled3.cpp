#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

int main(){
	node* head = NULL;
	
	return 0;
}

void print(node *n){
	node *last = new node;
	
	cout << "\nTraversal in forward direction\n";
	while(n != NULL){
		cout << n->data<< " ";
		last = n;
		n = n->next;
	}
	
	cout << "\nTraversal in reverse direcion\n";
	while(last != NULL){
		cout << last->data<< " ";
		last = last->prev;
	}
}

void insertBefore(node **head_ref, node *next_node){
	//check if the given next node is NULL
	if (next_node == NULL){
		cout << "\nThe next node cannot be NULL";
		return;
	}
	
	//allocate new node
	node *temp = new node;
	temp->data = new_data;
	temp->prev = next_node->prev;
	next_node->prev = temp;
	temp->next = next_node;
	
	if(temp->prev != NULL){
		temp->prev->next  = temp;
	}
	else{
		*head_ref = temp;
	}
}




