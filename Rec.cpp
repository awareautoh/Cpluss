#include<iostream>
#include<string>
using namespace std;

//Defind class and function to find the rectangle 
class Rectangle {
    int sideA, sideB, sideC, sideD;  bool equalAngles;
public:
    Rectangle(int sideA, int sideB, int sideC, int sideD, bool equalAngles) {
        this->sideA = sideA; //A and C are opposite sides
        this->sideB = sideB; //B and D are opposite sides
        this->sideC = sideC;
        this->sideD = sideD;
        this->equalAngles = equalAngles;
    }
    int getA() {return sideA;}
    int getB() {return sideB;}
    int getC() {return sideC;}
    int getD() {return sideD;}
    bool getEqualAngles() {return equalAngles;}
};

char* checkType(Rectangle r){
	if(r.getA() == r.getB() && r.getA() == r.getC() && r.getA() == r.getD())
		if(r.getEqualAngles())
			return "Squar";
		else
			return "Rhombus";
	else if(r.getA() == r.getC() && r.getB() == r.getD())
		return "Parellalogram";

		else

		return "Trapzoid";

}
 

int main(){

 Rectangle r(2, 2, 2, 2, true);
    Rectangle r1(2, 2, 2, 2, false);
    Rectangle r2(1, 2, 1, 2, false);
    Rectangle r3(1, 3, 4, 5, false);
    cout << "Rectangle r is a " << checkType(r) << endl;
    cout << "Rectangle r1 is a " << checkType(r1) << endl;
    cout << "Rectangle r2 is a " << checkType(r2) << endl;
    cout << "Rectangle r3 is a " << checkType(r3) << endl;





    return 0;

}