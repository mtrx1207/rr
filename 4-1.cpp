#include <iostream>
using namespace std;

class Integer{
private:
    int value;
public:
    Integer(int v): value(v){} //constructor
    Integer operator++();
    Integer operator++(int);
    int getValue(){
        return value;
    }
};

//pre increment
Integer Integer::operator++(){
    value++;
    return *this;
}

//post increment
Integer Integer::operator++(int){
    const Integer old(*this);
    ++(*this);
    return old;
}

int main(){
    // Integer i(10);
    // Integer *pi = new Integer(100);
    // cout << i.value << endl;
    // cout << pi->value << endl;
    
    Integer i(10);
    cout << "Post Increment Operator" << endl;
    cout<<"Integer++ : " << (i++).getValue()<< endl;
    cout<<"Pre Increment Operator"<< endl;
    cout << "++Integer : "<<(++i).getValue()<< endl;
    // int a(5);
    // cout << ++a; //gw tambah dlu, baru print
    // cout << a++; //gw print dlu, baru tambah
    // cout << a;
}

