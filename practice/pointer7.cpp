#include <iostream>

using namespace std;

struct node{
	int value;
	node *next;
};
int main(){
	node *root;
	root = new node;
	root->value = 23;
	root->next = NULL;
	
	cout << "\n The value pointed by the head is "<< root->value<<endl;
	
	return 0;
	
}
