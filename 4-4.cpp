#include <iostream>

class A{
    public:
    A(int n) : m_n(n){
        std::cout << "Constructor called!" << std::endl;
        if(n == 0){
            throw std::logic_error("0");
        }
    }
    ~A(){
        std::cout << m_n;
    }
    public:
    const int m_n;
};

int main(){
    try{
        A a(1); //
        A c(2);//
        A b(0);
    }
    catch(const std::exception &){
        std::cout << "3";
    }
    catch(...){
        std::cout << "error!" << std::endl; 
    }
    
    std::cout << "Hello";
    std::cout << std::endl;
    return 0;
}