#include<iostream>
#include<string>
using namespace std;

//define class and function 
// class


class Vehicle{
    string manufacturer, model;
    int engineSize, year;
    float price;
public:
    Vehicle(string manufacturer, string model, int engineSize, int year, float price){
        this -> manufacturer = manufacturer;
        this -> model = model;
        this -> engineSize = engineSize;
        this -> year = year;
        this -> price = price;
    }

    void changeEngine(int engineSize){
        this -> engineSize = engineSize;

    }
    virtual float calculateVehicleTax() = 0;

    int getEngineSize(){
        return engineSize;

    }
    int getYear(){
        return year;

    }
    float getPrice(){
        return price;

    }
    string getManufacturer(){
        return manufacturer;

    }
    string getModel(){
        return model;

    }


};

class Car : public Vehicle{
public: 
    Car(string manufacturer, string model, int engineSize, int year, float price):
    Vehicle(manufacturer,model,engineSize,year,price){

    }
    // calculate tax
    float calculateVehicleTax(){

        float tax = 0.15;
        if(getYear() > 2014){
            if(getEngineSize() > 1600)
                tax = 0.10;
        
        else
            tax = 0.05;
    }

        return getPrice() * tax;

    }

};

class Boat : public Vehicle{
public:
    Boat(string manufacturer, string model, int engineSize, int year,float price):
    Vehicle(manufacturer,model,engineSize,year,price){
    }

        float calculateVehicleTax(){

            float tax = 0.10;
            if(getPrice()> 10000){
                tax = 0.5;
            }

            //calculte the price 
           return getPrice() * tax; 

        }

};



int main(){
     Vehicle *v[4] = {
        new Car("Toyota", "Corolla", 1600, 2015, 11000),
        new Car("Toyota", "Corolla", 1600, 2010, 6000),
        new Boat("Fletcher", "Arrowflyte", 9, 2017, 16000),
        new Boat("Fletcher", "Arrowflyte", 9, 2010, 9000)
    };

    for (int i = 0; i < 4; i++) {
        cout << v[i]->getManufacturer() << " " << v[i]->getModel() << " " << v[i]->getYear() << 
          " engine: " << v[i]->getEngineSize() << " tax: " << v[i]->calculateVehicleTax() << endl;
        v[i]->changeEngine(2000);
        cout << v[i]->getManufacturer() << " " << v[i]->getModel() << " " << v[i]->getYear() << 
          " engine: " << v[i]->getEngineSize() << " tax: " << v[i]->calculateVehicleTax() << endl;
    }


    return 0;
}
