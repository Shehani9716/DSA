#include <iostream>
using namespace std;

struct node{
	int val;
	node* next;
};

void append(node* &h, int data);
void print(node *h);
void add_node(node *&h, int loc,int value);

int main(){
	node* head = NULL;
	int numb;
	
	cout << "\nLinked list : Insert a node at the begining ";
	cout << "\n=================================================";
	
	cout << "\nInput the number of nodes : ";
	cin >> numb;
	
	cout << endl;
	
	for(int i=0; i<numb; i++){
		int dt;
		cout<< "Input data for node "<< i+1<<" : ";
		cin>>dt;
		append(head, dt);
	}
	
	cout << "\n\nData entered in the list are : ";
	print(head);
	
	int B;
	cout << "\n\nInput data to insert at the beginning of the list : ";
	cin >>B;
	add_node(head,0,B);
	print(head);
	
	return 0;
}

void append(node* &h, int data){
	node *temp = new node;
	temp->val = data;
	temp->next = NULL;
	
	if(h == NULL){
		h = temp;
	}
	else{
		node *current = h;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
	}
}

void print(node *h){
	while(h != NULL){
		cout << h->val<< " ";
		h= h->next;
	}
}

void add_node(node *&h, int loc,int value){
	node *temp = new node;
	temp->val= value;
	temp->next= NULL;
	
	if(loc==0){
		node *current = new node;
		current->next=h;
		h=current;	
	}
	else if(h==NULL){
		h=temp;
	}
	else{
		node *current = h;
		node *prev = NULL;
		
		for(int i=0; i<loc; i++){
			prev = current;
			current = current->next;
			if(current->next == NULL){
				break;
			}
			temp->next=current;
			prev->next=temp;	
		}
	}
}	

void add_node_begin(int num){
	
}



