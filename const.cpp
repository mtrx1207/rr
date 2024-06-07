#include <iostream>
using namespace std;

class A{
public:
    int x = 1;

    void f(int i) const{ //ini fungsi const, dia gaboleh utak atik variabel apapun
        // x = i; //ini invalid
        cout << i << endl;
    }
    void g(int i){ //ini fungsi bukan const
        x = i;
    }
};

int main(){
    A a; //non-const, boleh diutak atik (fungsi const, sama non const bisa dicall)
    a.f(5);
    cout << a.x << endl;
    const A b; //const, semua member b gaboleh diutak atik (cuman fungsi const doang yg bs dicall)
    b.g(100); //invalid
    // const int a = 500;

    // const int * c = &a; //pointernya boleh diganti, datanya gaboleh diganti
    // int * const b = new int; //datanya boleh diganti, pointernya gboleh diganti
    // const int * const d = new int;

    // cout << *b;
}