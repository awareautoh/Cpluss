#include<iostream>
using namespace std;

//defifn the function to find 0

int countZeros(int **arr, int clos, int rows){
	int zeros = 0;

	for(int i= 0; i<rows; i++){
		for(int j=0; j<clos; j++)
			if(arr[i][j]==0)
				//count how many zero here
				zeros++;


	}

	return zeros;

}

//add sum function 

int sumF(int **arr, int clos, int rows){

	int sum =0;

	for(int i=0; i<rows; i++){

		for(int j=0; j<clos; j++)
			sum += arr[i][j];
	}

	return sum;
}



int main(){

 int **arr = new int*[5];
    arr[0] = new int[3] {1, 1, 1};
    arr[1] = new int[3] {1, 0, 1};
    arr[2] = new int[3] {1, 1, 0};
    arr[3] = new int[3] {1, 0, 1};
    arr[4] = new int[3] {0, 1, 1};
    cout << "Number of zeros in array: " << countZeros(arr, 3, 5) << endl;

    cout << "The total number of array: " << sumF(arr,3,5) <<endl;




	return 0;

}
