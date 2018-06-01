#include<iostream>
#include<string>
using namespace std;



int main(){

	// perform reverse string here

	string s = "Hello World";
	int i = 0;
	int j = s.size()-1;

	while(j > i){

		char temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		--j;

	}

	cout << s <<endl;


	return 0;
}