/*
	linked list
*/ 

#include <iostream>
using namespace std;

//creating a structure of node to store data
struct node{
	int data;
	node *next;
};

node *head = NULL; // making the head node as global.

int main(){
	node *ptr1 = new node;
	ptr1->data = 1;
	ptr1->next = NULL;
	head = ptr1;
	
	cout << ptr1->data << "\t"<< ptr1->next<< endl;
	
	node *ptr2 = new node;
	ptr2->data = 2;
	ptr2->next = NULL;
	head = ptr2;
	
	cout << ptr1->data<< "\t"<< ptr1->next<< endl;
	cout << ptr2->data<< "\t"<< ptr2->next<< endl;
	return 0;
}

