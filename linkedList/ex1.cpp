#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

int main(){
	int num;
	
	cout << "\nLinked list : Ex-01";
	cout <<"\n==================================";
	cout <<"\nInput the number of nodes : ";
	cin >> num;
	cout << endl;
	
	node *head = NULL;
	
	for(int i=0; i<num; i++){
		node *temp = new node;
		cout << "Input data for node "<<i+1<<" : ";
		cin>>temp->data;
		temp->next=NULL;
		
		if(head == NULL){
			head=temp;
		}
		else{
			node *current = head;
			while(current->next != NULL){
				current =current->next;
			}
			current->next=temp;
		}
	}
	
	cout << "\n\n Data enterd in the list : ";
	node *h=head;
	while(h != NULL){
		cout<< h->data<<" ";
		h=h->next;
	}
	
	
	
	
	return 0;
}
