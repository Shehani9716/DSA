ek.
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
