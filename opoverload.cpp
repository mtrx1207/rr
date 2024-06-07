#include <iostream>

using namespace std;

class Complex{
public:
    int real, imaginary;
    Complex(int r, int i){
        real = r;
        imaginary = i;
    }
    void print(){
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex operator+(Complex& b){
        int newReal = this->real + b.real;
        int newImag = this->imaginary + b.imaginary;
        Complex newComplex(newReal, newImag); //terbuatlah satu object baru
        return newComplex;
    }
};

//operator overloading
// Complex operator+(Complex& a, Complex& b){
//     int newReal = a.real + b.real;
//     int newImag = a.imaginary + b.imaginary;
//     Complex newComplex(newReal, newImag); //terbuatlah satu object baru
//     return newComplex;
// }

int operator+(Complex& a, int b){
    return a.real + b;
}

int main(){
    int a = 5;
    int b = 6;
    int c = a + b;
    Complex c1(4,5);
    c1.print();
    Complex c2(2,3);
    c2.print();
    Complex c3 = c1 + c2;
    int d = c1 + 5;
    c3.print();
    cout << d;
}