//queue
#include <iostream>
using namespace std;

int queue[10];
int maximum = 10;
int front = -1;
int rear=-1;

int peek(){
	return queue[front];
}

bool isFull(){
	if(rear == maximum-1){
		return true;
	}
	else 
		return false;
}

bool isEmpty(){
	if(front==-1 ||front>rear){
		return true;
	}
	else
		return false;
}

void enqueue(int data){
	if(!isFull()){
		if(front==-1){
			front =0;
		}
		rear++;
		queue[rear]=data;
	}
	else 
		cout << "\terror : queue overflow\n";
}

void dequeue(){
	if(!isEmpty()==true){
		//int data = queue[front];
		cout << "The removed element is "<< queue[front] << endl;
		front++;
	}
	else
		cout << "\terror : queue underflow\n";
}
void display(){
	cout << "The queue is ";
	int i;
	for(i=front; i<=rear; i++){
		cout << queue[i]<< " ";
	}
	cout << endl;
}

int main(){
	int choice; 

	cout << "\n_______________Menu______________";
	cout <<"\n 1  : insert data";
	cout <<"\n 2  : remove data";
	cout <<"\n 3  : display data";
	cout <<"\n 4  : access the peek";
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
			enqueue(value);
			break;
		}
		case 2:{
			dequeue();
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
