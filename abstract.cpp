#include <iostream>
using namespace std;
class Animal{ //ini abstract class
public:
    virtual void sound() = 0;
};

class Dog : public Animal{ //ini juga abstract class, krena dia gk define virtual function base classnya
public:
    // virtual void sound() = 0;
    void bark(){
        std::cout << "bark bark ..." << std::endl;
    }
};

class Cihuahua : public Dog{
    public:
    void sound(){
        cout << "gukguk " << endl;
    }
};

class Cat : public Animal{ // ini bukan abstract class, krena sound udh di override
public:
    void sound(){
        cout << "meow" << endl;
    }
};

int main(){
    Cihuahua d;
    d.sound();
    Cat jay;
    jay.sound();
    return 0;
}