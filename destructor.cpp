#include <iostream>

using namespace std;
class A{
public:
    int x = 0;
    A(){ //ini constructor
        cout << "constructor called"  << endl;
    }
    ~A(){ //ini destructor, called when A is destroyed (program / function ends)
        cout << "destructor called" << endl;
    }
    void add(int i){
        x+=i;
        cout << x << endl;
    }
};

void foo(int i){
    static A a; //call destructor only once
    a.add(i); //for demo what is static
}

void f(int x){
    static int a = 0; 
    a+=x;
    cout << a << endl;
}

int main(){
    A nama;//kepanggil sekali
    int a = 5;
    int *b = &a;
    A *p = new A[5]; //runtime memory allocation, gk otomatis didelete
    delete[] p;
    
    for(int i = 0; i < 5; i++){ //kepanggil sekali
        foo(i); 
    }

    // int a = 5;
    // int *b = &a;
    // int **c = &b;
    // int *p = new int[5];
    // *p = 0;
    // *(p+1) = 1;
    // *(p+2) = 2;
    // cout << *p << *(p+1) << *(p+2);
    int arr[4][5] = {{1,2},{3,4},{5,6}};
}