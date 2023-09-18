#include <iostream>

using namespace std;

//The basic structure of the node
struct node{
	int val;
	node *next;
	
};

//[4]
void Append(node *head);
void print(node *head);

int main(){
	
	//[5]
	node *head = NULL;
	Append (head);
	print(head);
	append(head);
	print(head);
//	//node *head = new node; //alternative part for the down section.but not suitable in everytime since we have to add nodes in th e middle of the lists
//	//head->value= 100;
//	//head-> next = NULL;
//	
//	node *head = NULL;
//	node *temp = new node;
//	temp->val = 100;	// ->=(*temp).val
//	temp->next = NULL;
//	
//	head = temp;
//	
//	cout<< head->val;
//	cout << endl<< head->next;
//	//.................
//	//second node...........
//		
//	temp = new node;
//	temp->val= 150;
//	temp->next=NULL;
//	
//	head->next=temp;
//	
//	cout << endl<< head->next->val;
//	cout << endl<< head->next;
//	cout << endl<< head->next->next;
//	
	
	return 0;
	
}

//[6]
void Append(node *head){
	
	node *temp = new node; 
	cout << "Enter the value to be appended : ";
	cin >> temp->val;
	
	temp->next= NULL;
	
	head =temp;
}

//[7]
void print(node *head){
	cout << endl<< head->val;
}
