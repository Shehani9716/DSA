#include <iostream>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

struct node *root = NULL;

void insertion(int value){
	node *temp = new node;
	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;
	
	node *current = new node;
	node *parent = new node;
	
	//if root is NUll -> create a root node
	if(root == NULL){
		root = temp;
		return;
	}
	else{
		current = root;
		parent = NULL;
		
		while(true){
			parent = current;
			
			// go to left branch
			if(value<parent->data){
				current = current->left;
				
				//add to left branch
				if(current == NULL){
					parent->left = temp;
					return;
				}
			}
			else{
			//go to right branch
				current = current->right;
				
				//add to right branch
				if(current == NULL){
					parent->right = temp;
					return;
				}
			}
		}
	}	
}


node* search(int value){
	node *current = root;
	
	while(current->data != value){
		
		//go to left child
		if(current->data>value){
			current= current->left;
		}
		else{
			current = current->right;
		}
	}
	
	if(current==NULL){
		cout << "Value not found\n";
	}
	
	return current;
}

void preOrderTraversal(node* root){
	if(root != NULL){
		cout << root->data << " ";
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}
}

void inOrderTraversal(node *root){
	if(root != NULL){
		inOrderTraversal(root->left);
		cout << root->data<< " ";
		inOrderTraversal(root->right);
	}
}

void postOrderTraversal(node* root){
	if(root != NULL){
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		cout << root->data<< " ";
	}
}
int main(){
	int array[7] = {27, 14, 35, 10, 19, 31, 42};
	
	for(int i = 0; i<7; i++){
		insertion(array[i]);
	}
	
	cout << "\nEnter the element to be added : ";
	int element;
	cin>> element;
	
	node *search_result = search(element);
	if (search_result != NULL){
		cout << "\nElement found : "<< search_result->data;
	}
	else 
		cout << "\nElement not found ";
		
	cout << endl;	
	cout << "\nPre Order Traversal 	: ";
	preOrderTraversal(root);
	
	cout << "\nInOrder Traversal 	: ";
	inOrderTraversal(root);
	
	cout << "\nPost Order Traversal	: ";
	postOrderTraversal(root);
		
	return 0;
		
}






