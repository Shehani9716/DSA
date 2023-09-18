//array based queue list
#include <iostream>
using namespace std;

int queue[10], n=10, front =-1, rear=-1;

int main(){
	
	cout << "Enter the corresponding number!"<< endl;
	cout << "1\t:  Insert an element";
	cout << "\n2\t:  Delete an element";
	cout << "\n3\t:  Dispaly all elements";
	cout << "\n4\t:  Exit";
	
	int input;
	cin >> input;
	
	switch(input){
		case 1: enqueue(int data);
		break;
		case 2: dequeue();
		break;
		case 3: display();
		break;
		case 4: cout << "Exit\n";
		break;
		default : cout << "invalid input";
	}
}
//implementation of peek.
int peek(){
	return queue[front];
}

//isfull function
bool isfull(){
	if (rear==maximize-1)
		return true;
	else
		return false;
}

//isempty function
bool isempty(){
	if(front<0 || front>rear)
		return true;
	else
		return false;
}

//to insert data
int enqueue(int data){
	if (isfull())
		return 0;
		
	rear = rear+1;
	queue[rear]=datal
	
	return 1;
}

//to remove data
int dequeue(){
	if (isempty())
		return 0;
		
	int data = queue[front];
	front=front+1;
	
	return data;
}
