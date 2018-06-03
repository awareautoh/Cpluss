#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Read and write file with array 

void readFile(char* inputFile, string** arr) {

    string line;
    int indx;
    ifstream myStream(inputFile);
    if(myStream.is_open()){

        while(getline(myStream,line)){

            arr[indx] = new string(line);
            indx++;

        }

    }

}

void writeFile(char* outputFile, string** arr, int length) {

   ofstream myStream(outputFile);
   for(int i =0; i<length; i++){
        myStream<< *arr[i] <<endl;

   }
}

int main() {
    string * arr[6];
    char* fileName = "examQ4.txt";
    readFile(fileName, arr);
    writeFile("examQ4new.txt",arr,6);    
}