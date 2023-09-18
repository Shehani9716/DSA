#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};
node* getNewNode(int x);
void insertAtHead(node *&head_ref, int x);
void print(node *h);

int main(){
	node* head = NULL;//pointer to the head;
	insertAtHead(head, 2); print(head);
	insertAtHead(head, 4); print(head);
	insertAtHead(head, 6); print(head);
	return 0;
}


void insertAtHead(node *&head_ref, int x){
	node *temp = new node;
	temp->data=x;
	temp->prev= NULL;
	temp->next= NULL;
	
	if(head_ref == NULL){
		head_ref = temp;
	}
	else{
		head_ref->prev = temp;
		temp->next = head_ref;
		head_ref = temp;
	}
}

void print(node *h){
	cout << "\nForward  : ";
	while(h != NULL){
		cout << h->data << " ";
		h=h->next;
	}
	
	cout << "\nBackward : ";
	if(h->prev==NULL){
		cout<< "end";
	}
	else{
		while(h->next!=NULL){
			h=h->next;
		}
		//now the node is at the last node. 
		while(h->prev!=NULL){
			cout << h->data<< " ";
			h=h->prev;
		}
	}
	cout << endl<< endl;
}

