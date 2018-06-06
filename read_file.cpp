#include<iostream>
#include<fstream>
#include<string>
using namespace std;


// functio to read file

void readfile(char* inputfile){
	string content;
	ifstream myStream(inputfile);
	
	while(myStream >> content){

		cout<< content <<endl;
	}




}

void writefile(char* outputfile, string content){

	ofstream myStream(outputfile);
	myStream << content <<endl;
}



int main(){

	string contentw = "1,2,3,4,5"; 
	readfile("exam.txt");
	writefile("nexam.txt",contentw);



}
