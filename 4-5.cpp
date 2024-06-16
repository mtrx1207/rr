#include <iostream>

double d = 123.456;

void F(double &r){ //pass by reference
    r = r + 654.321;
    std::cout << "R:" << r; //777.777
    std::cout << "D:" << d << std::endl; //777.777
    d = d - 111.111;
    std::cout << r << std::endl;
}

int main(){
    F(d);
    std::cout << "D:" << d << std::endl; //12.345 
    return 0;
}