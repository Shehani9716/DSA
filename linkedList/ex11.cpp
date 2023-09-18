#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};

void printForward(node *h);
void printReverse(node *h);
void append_dl(node* &h, int element);

int main(){
	node *head = NULL;
	cout << "Linked list : create and display a doubly linked list";
	cout <<"\n=======================================================";
	
	//inserting data using a for loop
	int number_f_element;
	cout << "\n\nInput the number of nodes : ";
	cin >> number_f_element;
	cout << endl;
	
	for(int i=0; i<number_f_element; i++){
		int value;
		cout << "Input data for node "<< i+1<< " : ";
		cin >> value;
		append_dl(head, value);
	}
	
	cout << endl;
	printForward(head);
	printReverse(head);
	return 0;
}

void append_dl(node* &h, int element){
	node *temp = new node; 
	temp->data = element;
	temp->next = NULL;
	temp->prev = NULL;
	
	if (h == NULL){
		h= temp;
	}
	else{
		node *current = h;
		while(current->next != NULL){
			current = current->next;
			current->prev = current;	
		}
		current->next = temp;
		temp->prev = current;
	}
}

void printForward(node *h){
	cout << "\nForward : ";
	while(h != NULL){
		cout << h->data<< " ";
		h= h->next;
	}
}

void printReverse(node *h){
	node* temp1 = h;
	node* temp2 = temp1->next;
	
	temp1->next = NULL;
	temp1->prev = temp2;
	
	while (temp2 != NULL){
		temp2->prev = temp2->next;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp2->prev;
	}
	h = temp1;
	
	cout << "\nBackward : ";
	while(h != NULL){
		cout << h->data<< " ";
		h= h->next;
	}
}

//void print(node *h){
//	node *temp = h;
//	node *tail = new node;
//	
//	cout << "\nForward  : ";
//	while(temp != NULL){
//		cout << temp->data<< " ";
//		temp= temp->next;
//	}
//	tail->prev = temp;
//	
//	cout << "\nBackward : ";
//	while(tail != NULL){
//		cout << tail->data<< " ";
//		tail= tail->prev;
//	}
//}


//void printBackward(node *h){
//	cout << "\nBackword : ";
//	//go to the end of the list
//	node *temp = h;
//	while(temp->next != NULL){
//		temp = temp->next;
//		temp->prev = temp;
//	}
//	//now we are at the end of the list. 
//	//we should go to the beginning of the list using prev
//	
//	while(temp2!= NULL){
//		cout << temp2->data<< " ";
//		temp2= temp2->prev;
//	}
//		
//}


