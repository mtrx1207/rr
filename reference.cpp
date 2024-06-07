#include <iostream>

using namespace std;

int main(){
    int a(3); //int a = 3;
    // cout << a << " " << &a;
    //int ra = a; //pass by copy
    int &ra = a; //pass by reference
    //int &ra = &a is not valid, karena &ra bukan pointer!
    ra = 4;
    cout << a;
}