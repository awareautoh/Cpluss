#include<iostream>
#include<string>
using namespace std;

//Recursive to reverse the array 

void reverseArray(int *arpt, int lenght){

	if(lenght == 0){

		return;
	}
	else{

		reverseArray(arpt+1, lenght-1);
		cout<< *arpt <<endl;

	}

}


int main(){

	int array[] = {1,2,3,4,5,6};
	reverseArray(array,6);
	
	//it will print 6,5,4,3,2,1

	return 0;
}