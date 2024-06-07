#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "@A()";
    }
    virtual ~A(){
        cout << "@~A()";
    }
};

class B: public A{
public:
    B(){
        cout << "@B()";
    }
    ~B(){
        cout << "@~B()";
    }
};

int main(){
    A *ap = new A; //@A()
    B *bp = (B*)ap; //ini gk akan merubah pointview kita melihat A sebagai B, karena A bukan B
    delete bp; //@~A()
    cout<< endl;

    ap =new B; //@A()@B(), B is A ,jadi cons A dipanggil juga
    delete ap; //@~B()@~A(), destructor B dipanggil dlu baru destructor A
    cout << endl;
}