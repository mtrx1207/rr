#include <iostream>
using namespace std;

template <typename Child>
class Tree{
public:
    Tree(){m_years = 0;}/*ans */

    void Interface(){
        static_cast<Child*>(this)->Run();
    }
    void displayYears(){ cout << "Years " << m_years << endl;}

protected:
    int m_years;
};

class PineTree:public Tree<PineTree>{
public:
    void Run(){
        cout << "PineTree grows" << endl;
        m_years++;
    }
};

class AppleTree: public Tree<AppleTree>/*ans*/{
public:
    void Run(){
        cout << "AppleTree grows" << endl;
        m_years++;
    }
};

template<typename T>
void Action(T& tree/*ans */){
    tree.Interface();
}

int main(){
    PineTree pt;
    Action(pt); //Action(PineTree pt)

    AppleTree at;
    Action(at); //Action(AppleTree at)

    pt.Run(); /*ans */

    pt.displayYears();
    at.displayYears();
    /*
    PineTree grows
    AppleTree grows
    PineTree grows
    Years 2
    Years 1
     */
}