#include<iostream>
using namespace std;

//defifn the function to find 0

int countZeros(int **arr, int clos, int rows){
	int zeros = 0;

	for(int i= 0; i<rows; i++){
		for(int j=0; j<clos; j++)
			if(arr[i][j]==0)
				zeros++;


	}

	return zeros;

}


int main(){

 int **arr = new int*[5];
    arr[0] = new int[3] {1, 1, 1};
    arr[1] = new int[3] {1, 0, 1};
    arr[2] = new int[3] {1, 1, 0};
    arr[3] = new int[3] {1, 0, 1};
    arr[4] = new int[3] {0, 1, 1};
    cout << "Number of zeros in array: " << countZeros(arr, 3, 5) << endl;




	return 0;

}