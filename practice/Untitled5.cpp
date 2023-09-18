state next_possible_action(state S){		//3,3,1, 

	
		for(int i=0; i<5; i++){
			if(S.B==1){
				for(int i=0; i<5; i++){
					
					int m = S.M-action[i].M;	//2,2,0
					int c = S.C-action[i].C;
					int b = S.B-action[i].B;
					
					state temp = {m,c,b};
					
					if(validity(temp) && movement_safety(temp)){//	move[j]=temp;
						if (temp.M==0 && temp.C==0 && temp.B==0){
							
							break;}
						next_possible_action(temp);
					}	
				}
			}
			else //2,2,0  
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

		}
	
	//print moves
}
