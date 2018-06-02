#include<iostream>
using namespace std;

//using recursion 

//reverse array 
template<class T>
void reverseArray(T *arpt, int lenght){

        if(lenght ==0){

            return;
        }
        
        else {

                reverseArray(arpt+1,lenght-1);

        
                cout<< *arpt <<",";
            }

}

template <class T>
void printArray(T *prpt, int lenght){
    if(lenght == 0){

        return;
    }
    else{

        cout<< *prpt <<",";
        printArray(prpt+1, lenght-1);
    }

}


int main(){

    string stringArray[5] = {"100", "200", "400", "500", "1000"};
    float floatArray[3] = {1.55f, 5.44f, 12.36f};
    
    reverseArray(stringArray, 5);
    reverseArray(floatArray, 3);

    cout<<endl;

    printArray(stringArray, 5);
    printArray(floatArray, 3);

    cout<<endl;

}