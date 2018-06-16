#include<iostream>
using namespace std;

class MyString{
    char* data;
    int lenght;

public:
    MyString(char *data, int lenght){
        this -> data = new char [lenght];
        this -> lenght = lenght;
        for(int i=0; i<lenght; i++){
            this -> data[i] = data[i];
        }


    }

    char* toString(){

        return data;
    }

    void printToConsole(){
        for(int i =0; i<lenght; i++){

            cout <<data[i];
        }
        cout<<endl;



    }

    void append(char *data, int lenght){
        char *temp = new char[this->lenght + lenght];
        for(int i=0; i<this->lenght; i++)
            temp[i] = this->data[i];
        for(int i=0; i<lenght; i++)
            temp[i+this-> lenght] = data[i];

        this-> data = temp;
        this->lenght +=lenght;

    }


};
// main file
int main() {
    MyString m(new char[5] {'H', 'e', 'l', 'l', 'o'},5);
    cout << "My string is: " << m.toString() << endl;
    m.append(new char[7] {' ','w', 'o', 'r', 'l', 'd','!'},7);
    m.printToConsole();
}
