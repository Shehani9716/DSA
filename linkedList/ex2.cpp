 #include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

void append(node*&h);
void print(node *k);
void riverse(node *h);

int main(){
	int num;
	node* head = NULL;
	cout << "\nLinked_list : Ex-02 (2021-01-13 00:34)";
	cout <<"\n=======================================\n";
	
	cout <<"\nInput the number of nodes : "; 
	cin >>num;
	cout << endl;
	
	for(int i=0; i<num; i++){
		append(head);
	}
	
	print(head);
	riverse(head);
	cout << "\nThe riverse list___________";
	print(head);
	return 0;
}
 
void append(node* &h){
	int input=0;
	cout<<"Input data for node : ";
	cin>>input;
	node *temp = new node;
	temp->data = input;
	temp->next = NULL;
	
	if(h==NULL){
		h = temp;
	}
	else{
		node *current =h;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
	}
}

void print(node *k){
	cout << "\n\nThe list is : ";
	while(k!=NULL){
		cout << k->data<<" ";
		k=k->next;
	}
}

void riverse(node *h){
	node *curr = h;
	node *prev =NULL;
	
	if(h != NULL){
		prev=h;
		prev->next = NULL;
		curr=h->next;
		h=h->next;//convert the as the last element.
		
		while(h !=NULL ){
			prev =curr;
			curr =h;
			
			curr->next=prev;
			h=h->next;
		}
		h=prev;
	}
	print(prev);
}



