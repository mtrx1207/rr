#include <iostream>
using namespace std;
int add( int a, int b){
    cout << "ewgfargl" << endl;
    return a+b;
}

double add(int a, int b){ //invalid
    return a+b;
}

double add(double a, double b=3.0){ //valid
    cout << "double" << endl;
    return a+b;
}

int add(int a, int b, int c){
    cout << "lolol" << endl;
    return a+b;
}

int main(){
    cout << add(3,4);
}