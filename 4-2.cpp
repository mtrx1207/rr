#include <iostream>
using namespace std;

class A{
public:
    A(int=0, int=0);
    void Show();
    void Set();
    void Set(int,int);
    ~A();
private:
    int x,y;
};

A::A(int x1, int y1):x(x1),y(y1){
    cout << "Construction function is called!" << endl;
}

A::~A(){
    cout << "Destructor function is called!" << endl;
}

void A::Set(int x, int y){
    this->x = x;
    this->y = y;
}

void A::Show(){
    cout << "x=" << x << " " << "y=" << y<< endl;
}

int main(){
    A a(10,20);
    a.Show();//
    a.Set(100,200);
    a.Show();//
    return 0;
}
