/*
	linked list
	owner - chathura sir
	DataStructures - 19-10-2020
*/

#include <iostream>
using namespace std;

struct node {
	int val;
	node *next;
};

int main(){
	
	
	//__________method_1_________________
	node *head = NULL; // creating the head pointer and assign null value.
			//head exists but there isn't any nodes.
	node *temp = new node;
			//assign values to the node pointer. 
	temp->val = 100;	// -> = (*temp).val
	temp->next = NULL;	// -> = (*temp).next
	
	head = temp;
	
	cout << head->val<<endl;
	cout << head->next;

	
	temp = new node;
	temp->val= 150;
	temp->next = NULL;
	
	head->next = temp;
	
	cout << "\n"<<head->next->val;
	cout << "\n"<< head->next; //address of the temp node;
	cout << "\n"<< head->next->next;
	
//	//______________method_2__________
//	node *head = new node;
//	head->val = 100;
//	head->next = NULL;
//	//not going to work allways

	return 0;
}

