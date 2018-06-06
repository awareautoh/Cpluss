#include<iostream>
#include<string>
using namespace std;



// find the maximum value of array 

int findMaxarray(int arr[], int lenght){
	int max = 0;

	for(int i =0; i<lenght; i++){

		if(arr[i] > max){
			max = arr[i];
			
		}
		
	}
	cout<<max<<endl;
	return max;


}

int findMin(int arr[], int lenght){
	int min =1;

	for(int i=0; i<lenght; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}


	cout <<min<<endl;

	return min;

}




int main(){

	int arr[] = {1,2,3,4,5};
	findMaxarray(arr,5);
	findMin(arr,5);



	return 0;
}