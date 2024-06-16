#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A::Ctor" << endl;
    }
    ~A(){
        cout << "A::Dtor" << endl;
    }
};

class Base{
    public:
    Base(){
        cout << "Base::Ctor" << endl;
    }
    virtual ~Base(){
        cout << "Base::Dtor" << endl;
    }
    virtual void f(){ //lihat function di derived class, kalo ada yg override, jalanin yg itu. klo gk ya jalanin yg ini
        cout << "base class f" << endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout << "Derived::Ctor" << endl;
    }
    ~Derived(){
        cout << "Derived::Dtor" << endl;
    }
    void f(){
        cout << "derived class f" << endl;
    }
    private:
    A a;
};

int main(){
    Base *b = new Derived;
    b->f();
    delete b;
}