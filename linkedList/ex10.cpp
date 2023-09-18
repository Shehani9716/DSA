#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void searchNode(node* h,int value);
void append(node *&h, int element);
void print(node *h);

int main(){
	int number_of_elements;
	cout <<"\nPointers :Search an existing elemet in the singly linked list ";
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
	
	int search_element;
	cout << "\nInput the element to be searched : ";
	cin>> search_element;
	searchNode(head, search_element);
	
	return 0;
}

void searchNode(node* h,int value){
	int position = 1;
	while(h->next != NULL){
		if (value != h->data){
			h=h->next;
			position ++;			
		}
		else{
			cout << "\nElement found at node "<< position;
			break;
		}
	}
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

