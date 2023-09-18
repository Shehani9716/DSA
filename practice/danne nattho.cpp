#include <iostream>
using namespace std;


// M  C   B
int start []={3,3,1};
 int end [] ={0,0,0} ;
 int solutions[10];
 int path[12][3];
 
 
 
 
 int posible_action[5][3]={{1,0,1},{0,1,1},{2,0,1},{0,2,1},{1,1,1}};
 
 
 
 int *action_selector(int index){
 	
 	static int selected_array[3];
	 
	 for(int x=0; x<3; x++){
	 	
	 	selected_array[x]=posible_action[index-1][x];
	 	
	 }
	  
	  return selected_array;
 	
 }
 
 
 
 
 
 
 
 bool isSafe(int bank[]){
 	
 	//for(int x=0; x<3; x++){
 		
 		if( (bank[1] > bank[0] ) && bank[0] != 0){
 			
 			return false;
 			
		   }else{
		   	
		   	return true;
		   	
		   } 			
 			
		// }
 		
 		
	 }
 	
 

bool isLegal(int state[]){
	
	
	if ( ( 0 <= state[0] <= 3  ) && ( 0  <= state[1] <= 3 )){
		
		
		return true;
		
	}else {
		
		return false;
	}
	
	
}




bool is_State_Safe(int state[]){
	
	int opposite_bank[3];
	
	for(int x=0; x<3; x++){
	
	opposite_bank[x]=start[x]-state[x];
	
	
		
	}
	
	
	if(isSafe(state) && isSafe(opposite_bank)){
		
		return true;
		
		
	}else{
		
		return false;
		
	}
	
	
	
}





int *do_actions(int state[], int *pointer){
	
	
	     static int plusarray[3];
	     static int minusarray[3];
	     
	     
	     int action[3];
	     
	     
	     for(int x=0; x<3; x++){
	     	
	     	action[x]=pointer[x];
		 }
	     
	     
	     
	     if(state[2]==1){
	     	
	     	
	     	for(int x=0; x<3; x++){
	     		
	     		minusarray[x]=state[x]-action[x];
	     		
			 }
			 
			 
			 return minusarray;
	     	
		 }else{
		 	
		 	for(int x=0; x<3; x++){
		 		
		 		plusarray[x]=state[x]+action[x];
		 		
			 }
		 	
		 	
		 	return plusarray;
		 	
		 }
	     
	     
		

}


// int posible_action[5][3]={{1,0,1},{0,1,1},{2,0,1},{0,2,1},{1,1,1}};

void next_posible_action(int state[]){
	
	int size_of_moves=2;
	
	int *moves=new int[size_of_moves];
	
	
	for(int x=0; x<5; x++){
		 moves[x]=new int[3];
		
	}
	
	
	
	
	for(int x=0; x<5 ;x++){
		
		int *j = do_actions(state,action_selector(x));
		
	//	int jarray[3];
		
		
		/*for(int i=0; i<3; i++){
			
			jarray[i]=j[i];
			
		}  */
		
		if(isLegal(j) && isSafe(j)){
			
			//moves[x]=j;
			
			if(x>= size_of_moves){
				
				size_of_moves++;
			}
			
			
			for(int y=0; y<size_of_moves; y++){
				
				
				for(int a=0; a<3; a++){
				
				
				   moves[y][a]=j[a];	
					
				}
				
				
				
			}
			
			
			
		} 
		
	}
	
	
	
}

bool is_two_array_equal(int array1[],int array2[]){
	
	 int x=1;
		
		if(array1[x]==array2[x] ){
			
			if(array1[x+1]==array2[x+1]){
				
				if(array1[x+2]==array2[x+2]){
					
					return true;
				}
			}
			
		}else{
			
			return false;
			
		}
		

	
	
}




int size_of_solution=2;
	
	int *solution=new int[size_of_solution];
	
	
	for(int x=0; x<size_of_solution; x++){
		solution[x]=new int[3];
		
	}
	







int solve(int next_action[],int path[]){
	
	
	coppyPath[3];
	
	for(int x=0; x<3; x++){
		
		coppyPath[x]=path[x]
	}
	
	
	if(is_two_array_equal(next_action,end)){
		
		coppyPath=next_action;
		solutions=coppyPath;
		return;
	}else if(next_action == path){
		
		return;
	}else{
		
	    for(int x=0; x<3; x++){
	    	solve(x,coppyPath);
	    	
		}	
	}
	
}




int main(){
	
	solve(start,);
	cout << &solutions << endl;
	return 0;
}
