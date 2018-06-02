#include<iostream>
using namespace std;

//using fuction to reverse and print multiple type 




//define reverse function 

template<class T>
void reverseArray(T *arr, int lenght){
    T temp; 

        for(int i = 0; i<lenght/2; ++i){
            temp = *(arr + i);
           *(arr + i) = *(arr + lenght-i-1);
           *(arr + lenght-i-1) = temp;

        }

}
template<class T>

void printArray(T *arr, int lenght){

    for(int i=0; i<lenght; ++i){
        cout << *(arr + i) << ",";
        
    }
    cout<< endl;
}

//defind print array

int main(){

    string stringArray[5] = {"100", "200", "400", "500", "1000"};
    float floatArray[3] = {1.55f, 5.44f, 12.36f};
    
    reverseArray(stringArray, 5);
    reverseArray(floatArray, 3);

    printArray(stringArray, 5);
    printArray(floatArray, 3);
    return 0;
}