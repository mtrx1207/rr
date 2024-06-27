#include <iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
// void Swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void Swap(char&a, char& b){
//     char temp = a;
//     a = b;
//     b = temp;
// }

int main(){
    int a = 3, b = 4;
    cout << a << b << endl;
    Swap<int>(a,b);
    cout << a << b << endl;

    char x = 'a', y = 'b';
    cout << x << y << endl;
    Swap(x,y);
    cout << x << y << endl;
}