/*
	linked list-3
	________________________
	__Appending_a_node______
	________________________
	_____double pointers____
	________________________
	owner - chathura sir
	DataStructures - 19-10-2020
*/
#include <iostream>
using namespace std;

struct node{
	int val;
	node *next;
};

void Append(node **h);//pointer to a node type poiter
void Print(node *p);
void Add_node(node *&h);

int main(){
	node *head = NULL;
	 
	Append(&head);
	Append(&head);
	Append(&head);
	Append(&head);
	Append(&head);
	Print(head);
	Add_node(head);
	Print(head);
}

void Append(node **h){
	node *temp = new node;
	cout << "\n\nEnter the value to be appended: ";
	cin >>temp ->val;
	temp->next = NULL;
	
	
	if(*h == NULL){
		*h=temp; 
		/*
			make the value at the location pointed by 
			h =temp
			copy address of temp pointed at is 
				copied in head.
			through this temp pointer 
				now head is pointing at the new node
		*/
	
	}
	else{/*
			assign a head in the current node and loop it 
			until find the null reference
		*/
		node *current = *h; 
		//also pointing at where head is pointing at
		while(current->next != NULL){
			current=current->next;
		}
		current->next = temp;
		delete current;
	}
	delete temp;
}

void Add_node(node *&h){
	//create a new node
	node *n = new node;
	int loc;

	cout << "\nEnter the value to add : ";
	cin>>n->val;
	cout << "\n Enter the position";
	cin>>loc;
	n->next=NULL;
	
	if(h==NULL){
		h= n;
	}
	else{
		node *current = h;
		node *previous= NULL;
		for(int i=0; i<loc-1; i++){
			previous = current;
			current = current->next;
			//check whether the loop is going outsid the list.
			if (current == NULL){
				break;
			}
		}
		n->next=current;
		previous->next=n;
	}
}

void Print(node *p){//p is equal to h
	cout <<"The list is : ";
	while(p != NULL){
		cout << p->val<<" ";
		p = p->next;
	}	
}

