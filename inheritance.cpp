#include <iostream>
using namespace std;
class Instrument{
public:
    int x, y;
    Instrument(){
        cout << "default cons" << endl;
    }
    Instrument(int x, int y){
       this->x = x;
       this->y = y;
        std::cout << "instrument constructor is called" << x << std::endl;
    }
    void printXY(){
        cout << x << y << endl;
    }
};

// class Violin: public Instrument{
//     int y;
// public:
//     Violin(int x):Instrument(x){
//         std::cout << "violin constructor is called" << std::endl;
//     }
// };

void f(Instrument &i){
    i.x += 1;
}

void ff(int a){
    a = a+1;
    cout << a << endl;
}
int main(){
    // Violin v(3);
    // cout << v.getX();
    // Violin V(4);
    
    // Instrument i(3,4);
    // Instrument i1(40,50);

    // i = i1;
    // i.printXY();
    // i1.printXY();

    int a = 5;
    ff(a);
    cout << a;

    // int x = 5;
    // f(x);
    // cout << x << endl;
}