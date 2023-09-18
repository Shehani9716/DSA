#include <iostream>
#include <string>

using namespace std;

struct node{
	//data part
	int no;
	string name;
	int mark[2];
	
	//coonectivity part
	node *nextnode;//this pointer can hold the address of a memory location of node type
	
};

int main(){
	
	node mystudent[2];		//some compilers need to have ' struct ' keyword before the structure of array identification.  
							//and in dev c++ compiler it's not compulsary (ex: struct node mystudent[];)
	int counter;
	
	while (counter<2){
		cout << "Enter the number of student "<< counter +1 << ":";
		cin >> mystudent[counter].no;
		cout << "Enter the name of the student "<< counter + 1 << ":";
		cin >> mystudent[counter].name;
		cout << "Enter the subject 1's mark of the student "<< counter +1 << ": ";
		cin >> mystudent[counter].mark[0];
		cout << "Enter the subject 2's mark of the student "<< counter +1 << ": ";
		cin >> mystudent[counter].mark[1];	
		cout << endl << endl;
		counter ++;
			
	}
	
	cout << "\n The details of the student 1 is "<< mystudent[0].no<< " "<< mystudent[0].name<<" "<< mystudent[0].mark[0]<< " "<<mystudent[0].mark[1]<<endl;
	
	return 0;
}
