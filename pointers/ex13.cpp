#include <iostream>
using namespace std;

void count_vowels(char *ch);

int main(){
	char str[100];
	cout << "pointer: count vowels and constants ";
	cout << "\n==========================================";
	cout << "\n\nInput a string : ";
	cin >>str;
	
	count_vowels(str);
	
	return 0;
}

void count_vowels(char *ch){
	int vowelcount=0, constantcount=0;
	while(*ch != NULL){
		if (*ch=='a' || *ch=='e' || *ch=='i' || *ch=='o' || *ch=='u'){
			vowelcount++;
		}
		else{
			constantcount++;
		}
		ch++;
	}
	cout << "\nNumber of vowels : " << vowelcount;
	cout << "\nNumber of constants : "<<constantcount;
}
