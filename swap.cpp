#include<iostream>
using namespace std;

void swap(int &a, int &b){

	int temp = a;
	a = b;
	b = temp; 

}


int main(){


	//swap the value

	int a = 3;
	int b = 5;

	cout<<"before swap a = "<<a<<endl;
	cout<<"before swap b = "<<b<<endl;

	//call awap function to change the value of b and c

	swap(a,b);

	cout<<"the value of a is "<<a<<endl;
	cout<<"the value of b is "<<b<<endl;

	//swap other value

	int c = 5;
	int e = 10;

	swap(c,e);

	cout<< "the value of c is " << c <<endl;
	cout<< "the value of e is " << e <<endl;





	return 0;
}
