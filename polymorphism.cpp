#include <iostream>

using namespace std;

class Animal{
public:
    int ptd;
    void print(){ //prioritized
        cout << "This is Animal" << endl;
    }
    // virtual void purevirtual() = 0; // ini harus di override
    virtual void printv(){ //maksudnya: liat ke child class, ada gak yg override printv? kalo ada, call fungsi yg itu!
        cout << "This is animal virtual" << endl; 
    }
};

class Dog: public Animal{
public:
    void print(){
        cout << "This is Dog" << endl; //function overriding
    }
    void printv(){ //prioritized
        cout << "This is dog virtual" << endl;
    }
};

int main(){
    Dog d;
    d.print();
    d.printv();
    Animal *a = new Dog; //dog is animal, jadi a adalah pointer animal yang nunjuk ke objek dog
    a->print();
    a->printv();
}