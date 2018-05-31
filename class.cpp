#include<iostream>
using namespace std;

//define classes 

class MyClass{

public:

	int c;
	int k;
	int sum;

	void Print(int a, int b){


		int result; 

		result = a + b;

		cout<< result <<endl;
	}

};

class Class2{
/*
	x += 10
   means: x = x + 10
*/
public:
	int x;
	int y;

	void add(int first, int second){

		x += first;
		y += second;

	}
	void show(){

		cout <<"x is " << x << "Y is "<< y <<endl;

	}

};

int main(){

	MyClass myObject;

	myObject.Print(2,4);

	int mm = myObject.c = 1;
	int cc = myObject.k = 2;

	cout <<mm +cc<<endl;

	//print second

	Class2 sec;
	sec.x = 1;
	sec.y = 4;
	sec.add(3,5);
	sec.show();

	return 0;
}