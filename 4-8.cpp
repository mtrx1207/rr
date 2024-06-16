#include <iostream>
using namespace std;
class A{
private:
    int i;
public:
    A(int ii): i(ii){}
    void p(){ cout << i; }
};

class B : public A{
private:
    int i;
public:
    B(int ii):A(ii + ii), i(ii){}
    void p(){cout << i;}
};

class C : public B{
private:
    int i;
public:
    C(int ii):B(ii+ii), i(ii){}
    void p(){cout << i;}
};

int main(){
    A *p = new C(2);
    p->p();
}