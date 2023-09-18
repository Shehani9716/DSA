//missionaries and cannibals problem solving
#include <iostream>
using namespace std;

struct state{
	int M; //represents number of missionaries
	int C; // represents number of cannibals
	int B; // represent the availability of boat.
			//if boat is available the B becomes 1 and if not its 0;
};

//to be deleted
state action[]={{1,1,1}, {2,0,1}, {0,2,1}, {1,0,1}, {0,1,1} };//be sure to delete this row
int missionaries, cannibals;

state do_action(state S);
bool validity(state S);
bool bank_safety(state S);
bool movement_safety(state S);
state next_possible_action(state S);



int main(){

	
	cout << "Enter the number of missionaries	: ";
	cin >> missionaries;
	cout << "Enter the number of cannibals		: ";
	cin >> cannibals;
	
	state start = {3,3,1};
	state end={0,0,0};
	
	state action[]={{1,1,1}, {2,0,1}, {0,2,1}, {1,0,1}, {0,1,1} };

	return 0;
}

state do_action(state S){
	if(S.B==1){
		for(int i=0; i<5; i++){
			int m = S.M-action[i].M;
			int c = S.C-action[i].C;
			int b = S.B-action[i].B;
			state temp = {m,c,b};
			return (temp);
		}
	}
	else 
		{
		for(int i=0; i<5; i++){
			int m = S.M+action[i].M;
			int c = S.C+action[i].C;
			int b = S.B+action[i].B;
			state temp = {m,c,b};
			return (temp);
		}
	}	
}

bool validity(state S){
	if (0 <=S.M<= 3  && 0 <=S.C<= 3)
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
////	state moves[sizeof];
//	
//		for(int i=0; i<5; i++){
//			state temp = do_action(S);
//			if(validity(temp) && movement_safety(temp)){
//	
//			//	move[j]=temp;
//				if (temp.M==0 && temp.C==0 && temp.B==0){
//					//print moves
//					break;
//				}
//				else{
//					next_possible_action(temp);
//				}
//			}
//		}
//	
//	//print moves
//}



void print(state S){
	cout<< "["<< S.M << "," << S.C << ","<< S.B << "]";
}


