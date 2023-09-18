#include <iostream>
using namespace std;
int maximum = 100;
int top=-1;
int stack[100];

int peek();
bool isFull();
bool isEmpty();
void push(int data);
void pop();
void display();

int main(){
	int choice; 

	cout << "\n_______________Menu______________";
	cout <<"\n 1  : insert data";
	cout <<"\n 2  : remove data";
	cout <<"\n 3  : display data";
	cout <<"\n 4  : access the peak";
	cout <<"\n 5  : exit";
	cout << "\n_________________________________\n";
	while(choice != 5){
	cout << "\n your choice : ";
	cin >>choice;
	
	switch(choice){
		case 1: {
			cout << "Enter the value to be pushed : ";
			int value;
			cin >> value;
			push(value);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			peek();
			break;
		}
		default:{
			cout << "Exit"<< endl;
			break;
		}
	}
}
	//declare an array
	return 0;
}

int peek(){
	return stack[top];
}

bool isFull(){
	if(top == maximum-1){
		return true;
	}
	else
		return false;
	}


bool isEmpty(){
	if(top == -1){
		return true;
	}
	else 
		return false;
}

void push(int data){
	if(!isFull()){
		top = top + 1;
		stack[top]=data;
	}
	else 
		cout << "\ncouldn't store data(storage is not enough)\n";
}

void pop(){
	if(!isEmpty()){
		cout<< "The removed element is "<< stack[top];
		top = top-1;
	}
	else
		cout << "stack is empty"; 
}

void display(){
	if(top>=0){
		cout << "Stack elements are : ";
		int i;
		for( i=top; i>=0; i--);
		cout << stack[i]<< " ";
		cout << endl;
	}
	else
		cout << "Stack is empty";
}
