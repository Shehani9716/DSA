#include <iostream>
using namespace std;

int main(){
	int *ptr1=NULL, *ptr2 = NULL;
	int var1, var2;
	
	var1= 35;
	var2= 78;
	
	cout<< "Value of variable 1 : "<< var1<< endl;
	cout<< "Value of variable 2 : "<< var2<< endl;
//	cout<< "Value at the location pointed by the ptr1" <<*ptr1<< endl;
//	cout<< "Value at the location pointed by the ptr2" <<*ptr2<< endl;

	ptr1=&var1;
	cout << "\nptr1=&var1";

	cout<< "\nValue of variable 1 : "<< var1<< endl;
	cout<< "Value of variable 2 : "<< var2<< endl;
	cout<< "Value at the location pointed by the ptr1 " <<*ptr1<< endl;
	//cout<< "Value at the location pointed by the ptr2" <<*ptr2<< endl;
	
	ptr2=ptr1;
	cout << "\nptr2=ptr1";
	cout<< "\nValue of variable 1 : "<< var1<< endl;
	cout<< "Value of variable 2 : "<< var2<< endl;
	cout<< "Value at the location pointed by the ptr1 " <<*ptr1<< endl;
	cout<< "Value at the location pointed by the ptr2 " <<*ptr2<< endl;	
	
	*ptr1= 12;
	cout << "\n*ptr1=12";
	cout<< "\nValue of variable 1 : "<< var1<< endl;
	cout<< "Value of variable 2 : "<< var2<< endl;
	cout<< "Value at the location pointed by the ptr1 " <<*ptr1<< endl;
	cout<< "Value at the location pointed by the ptr2 " <<*ptr2<< endl;
	
	return 0;
}
