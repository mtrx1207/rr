#include <iostream>

using namespace std;

namespace n1{
    int cout = 100;
}

namespace n2{
    int cout = 500;
    namespace n21{
        int cout = 1000;
    }
}

int main(){
    int cout = 1;
    std::cout << "hello world" << endl;
    std::cout << n2::n21::cout;
}