#include <iostream>
using namespace std;

class Int{
private:
    int x;
public:
    Int(int _x):x(_x){}
    Int operator++(){ //pre increment
        ++x;
        return Int(x);
    }
    Int operator++(int){ //post increment
        int temp = x;
        ++x;
        return Int(temp);
    }
    int getX(){return x;}
};

int main(){
    Int a(4);
    Int b = a++;
    cout << a.getX() << endl;
    cout << b.getX() << endl;
}