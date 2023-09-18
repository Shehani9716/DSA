/*
	linked list-2
	________________________
	__Appending_a_node______
	________________________
	_____REFERENCE__________
	________________________
	owner - chathura sir
	DataStructures - 19-10-2020
*/

#include <iostream>
using namespace std;

struct node {
	int val;
	node *next;
};

void Append(node *&h); //taking a refference to a pointer
void Print(node *p);
void Add_node(node *&h);

int main(){
	node *head = NULL;
	 
	Append(head);
	Append(head);
	Append(head);
	Append(head);
	Append(head);
	Print(head);
	Add_node(head);
	Print(head);
	
	
		
	return 0;
}

void Append(node *&h){
	node *temp = new node;
	cout << "\n\nEnter the value to be appended: ";
	cin >>temp ->val;
	temp->next = NULL;
	
	/*
	there can be two conitions 
	head has connected nodes 
	head hasn't connected nodes yet.
	therfore we have to find the end and append.
	*/
	if(h == NULL){ //check the head is null or not
		h=temp; //if head is null, assign the node and exit.
	}
	else{/*
			assign a head in the current node and loop it 
			until find the null reference
		*/
		node *current = h; //also pointing at where head is pointing at
		while(current->next != NULL){
			current=current->next;
		}
		current->next = temp;
	}

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


