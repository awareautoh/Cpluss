#include<iostream>
#include<string>
using namespace std;


//define function to reverse arrray 

void reverseArray(int arr[], int lenght){

	int temp; 

	for(int i = 0; i<lenght/2; i++){

		temp = arr[i];
		arr[i] = arr[lenght-i-1];
		arr[lenght-i-1] = temp;
	}

}

//function to reverse sting 
void reverseString(string s){

	int i =0;
	int j = s.size()-1;

	while(j>i){

		char tempor = s[j];
		s[j] = s[i];
		s[i] = tempor;

		i++;
		--j;


	}

	cout << s << endl;

}



int main(){


int arr[] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 6);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << ',';
    }
    cout << endl;

//call string reverse 

    reverseString("Hello World");


	return 0;
}