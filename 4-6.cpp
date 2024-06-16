#include <iostream>
#include <vector>
using namespace std;

//keep your code DRY: don't repeat yourself
template<typename T>
struct A{
    template<typename U>
    void foo(U u){
        cout << "U" << u << endl; 
    }
    void foo(T t){
        cout << "T" << t << endl;
    }
};

int main(){
    A<double> a;
    a.foo<int>(3.14);
}