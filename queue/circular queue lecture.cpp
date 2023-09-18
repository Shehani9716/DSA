#include <iostream>
using namespace std;

int maximum =10;
int cqueue[10];
int front =-1;
int rear =-1;

int peek(){
	return cqueue[front];
}

bool isFull(){
	if((front ==0 && rear==maximum-1) || front == rear+1){
		return true;
	}
	else 
		return false;
}

bool isEmpty(){
	if(front ==-1){
		return true;
	}
	else
		return false;
}

void enqueue(int data){
	if(!isFull()){
		if(front ==-1){
			front =0;
		}
		rear = (rear+1)%maximum;
		cqueue[rear]=data;
	}
	else
		cout << "\terror : queue overflow";
}

void dequeue(){
	if(!isEmpty()){
		if(front==rear){
			front =-1;
			rear =-1;	//resetting the queue after the last item deleted
		}
		else{
			cout << "\nThe removing element is : "<< cqueue[front];
			front = (front+1)%maximum;
		}
	}
	else
		cout << "\terror : queue underflow";
}

void display(){
	cout << "The queue is ";
	int i;
	for(i=front; i!=rear+1; i=(i+1)%10){
		cout<< cqueue[i]<< " ";
	}
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



