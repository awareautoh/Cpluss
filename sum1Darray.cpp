#include<iostream>
using namespace std;

//defind the function 


int sum(int arr[], int lenght){

	int add =0;

	for(int i=0; i<lenght ; i++)
		add += arr[i];


	return add; 

}


int main(){


	int arr[]= {1,2,3,4,5};
	cout<< sum(arr,5) <<endl;


	return 0;
}