#include <iostream>
using namespace std;

struct node{
	int val;
	node* next;
};

int count_nodes(node* head);

int main(){
	int number;
	cout << "\nLinked list : count the number of nodes ";
	cout <<"\n===============================================";
	cout <<"\n\nInput the nuber of nodes : ";
	cin >>number;
	cout << endl;
	
	
	node *head = NULL;
	for(int i=0; i<number; i++){
		node* temp = new node;
		cout << "Input data for node "<<i+1<<" : ";
		cin >>temp->val;
		temp->next = NULL;
		
		if(head == NULL){
			head = temp;
		}
		else{
			node *current = head;
			while(current->next != NULL){
				current = current->next;
			}
			current->next= temp;
		}
	}
	
	cout << "\n\nTotal number of nodes = "<< count_nodes(head)<<endl;
	
	return 0;
}


int count_nodes(node* head){
	int count=1;
	node* temp = head;
	while(temp->next !=NULL){
		count++;
		temp=temp->next;
	}
	
	return count;
}




