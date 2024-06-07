#include <iostream>

using namespace std;

//access modifier: public, private, protected

class Car{ //BASE CLASS, ini adalah ABSTRACT CLASS
protected:
    string brand;
public:
    Car(string Brand){ //constructor
        brand = Brand;
        cout << "new " << brand << " car created" << endl;
    }
    virtual void sound() = 0; //virtual function or abstract method
};

class ElectricCar: public Car{ //not abstract class anymore
public:
    ElectricCar(string brand):Car(brand){
        cout << "new electric car created" << endl;
    }
    void printElectricBrand(){
        cout << brand;
    }
    void sound(){
        cout << "ngungngung" << endl;
    }
};

class GasCar: public Car{ //still abstract class, karena ga redefine function sound nya
public:
    GasCar(string brand):Car(brand){
       cout << "new gas car created" << endl; 
    }
    // void sound(){
    //     cout << "ngengngeng" << endl;
    // }
};

int main(){
    ElectricCar ev1("toyota");
    //GasCar gc1("byd"); //GasCar is abstract can't instantiate an object!
    ev1.sound();
    //gc1.sound();
}