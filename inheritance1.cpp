#include <iostream>
#include <string>

using namespace std;
//OOP: abstraction, encapsulation, inheritance, polymorphism

class Human{
private:
    string name;
    int age;
public:
    int x;
    Human(string name){
        this->name = name;
        cout << "only name given" << endl;
    }

    Human(string Name, int Age, int X){ //ini constructor
        name = Name;
        age = Age;
        x = X;
        cout << "information complete" << endl;
    }

    string getName(){ //getter
        cout << name << endl;
        return name;
    }

    int getAge(){ //getter
        return age;
    }

    void printInfo(){
        cout << "Hello my name is " << name << ", I'm " << age << " years old" << endl;
    }
};

int main(){
    Human dave("dave", 50, 10);
    Human raymond("raymond", 17, 5);
    // cout << raymond.age << endl; //encapsulation
    cout << dave.getName();
}