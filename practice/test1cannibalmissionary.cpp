//missionaries and cannibals problem solving
#include <iostream>
using namespace std;

struct state{
	int M; //represents number of missionaries
	int C; // represents number of cannibals
	int B; // represent the availability of boat.
			
};

//to be deleted
state action[]={{1,1,1}, {2,0,1}, {0,2,1}, {1,0,1}, {0,1,1} };//be sure to delete this row
int missionaries, cannibals;

	
state do_action(state S);
bool validity(state S);
bool bank_safety(state S);
bool movement_safety(state S);
state next_possible_action(state S);
void print(state S);
int check_equals(state S, state A[]);

int main(){

	
	cout << "Enter the number of missionaries	: ";
	cin >> missionaries;
	cout << "Enter the number of cannibals		: ";
	cin >> cannibals;
	
	state start = {missionaries,cannibals,1};
	state end={0,0,0};
	
	state action[]={{1,1,1}, {2,0,1}, {0,2,1}, {1,0,1}, {0,1,1} };
	
	int k =1;
	state moves[k];
	moves[0]=start;																
	
	next_possible_action(start);
	return 0;
}

state do_action(state S, int i){
	if(S.B==1){
			int m = S.M-action[i].M;
			int c = S.C-action[i].C;
			int b = S.B-action[i].B;
			state temp = {m,c,b};
			return (temp);
		}
	
	else 
		{
			int m = S.M+action[i].M;
			int c = S.C+action[i].C;
			int b = S.B+action[i].B;
			state temp = {m,c,b};
			return (temp);
		}
	}
	
	
	
		
bool validity(state S){
	if (0 <=S.M<= missionaries  && 0 <=S.C<= cannibals)
		return true;
	else
		return false;
	
}

bool bank_safety(state S){
	if(S.M<S.C && S.C!=0)
		return false;
	else
		return true;
}

bool movement_safety(state S){
	int m = missionaries-S.M;
	int c = cannibals-S.C;
	int b = 1-S.B;
	state other_bank= {m,c,b};
		
	if (bank_safety(S) && bank_safety(other_bank))
		return true;
	else
		return false;	
} 

state next_possible_action(state S){

		for(int i=0; i<5; i++){
			state temp = do_action(S);
			if(validity(temp) && movement_safety(temp)){
				moves[k]=temp;
				k++;
				if (temp.M==0 && temp.C==0 && temp.B==0){
					//print moves array
					for (int a=0; a<k; a++){
						print(moves[a]);
					}
					break;
				}
				else if (check_equals(temp, moves, k)==1 ){
					//check with the previous moves.					
					k=1;
					break;
				}
				else{
					next_possible_action(temp);
					
				}
			}
		}
}
	


void print(state S){
	cout<< "["<< S.M << "," << S.C << ","<< S.B << "]";
}

int check_equals(state S, state A[], int size){
	for(int i=0; i<size; i++){
		if (S.M==A[i].M  && S.C==A[i].C && S.B==A[i].B)
			return 1;
	}
	
}
