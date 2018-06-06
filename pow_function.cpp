#include<iostream>

using namespace std;

//define function to power number


 int pow(int base, int exponent){

 	
 	int result;
 	for(int i=0; i< exponent; i=i+1){

 		result *= base;	
 	}

 	

 	return result;
 }

	


int main(){

//revoke funtion 

 int callfunc;

 callfunc = pow(2,4);

 cout<< callfunc <<endl;



return 0;

}
