#include <iostream>
using namespace std;
int add( int b, int a=10){
    cout << "ewgfargl" << endl;
    return a+b;
}

// double add(int a, int b){ //invalid
//     return (double)a+b;
// }

double add(double a, double b){ //valid
    cout << "double" << endl;
    return a+b;
}

int add(int a, int b, int c){
    cout << "lolol" << endl;
    return a+b;
}

int main(){
    cout << add(3);
}