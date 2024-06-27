#include <iostream>
#include <cassert>
using namespace std;

class IndexError{

};

template <typename T>
class Vector{
private:
    size_t dimension;
    T* data;

public:
    Vector(int _dimension):dimension(_dimension)/*TODO*/{
        data = new T[dimension + 1];
    }
    virtual ~Vector(){
        delete data;
        data = 0;
    }
    T& operator[](int index){
        if(index < 1 || index > dimension){
            throw 1; /*TODO*/
        }
        return data[index];
    }
    T operator*(const Vector &lhs) const;
};

template <typename T>
T Vector<T>::operator*(const Vector<T> &lhs) const{
    assert(dimension == lhs.dimension);
    T r = 0;
    for(int i = 1; i <= dimension; i++){
        r += this->data[i] * lhs.data[i];
    }
    return r;
}

int main(){
    int n, n1;
    cin >> n;
    cin >> n1;
    Vector<double> a(n), b(n1);
    try{
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n1; i++) cin >> b[i];
        cout << a[0];
    }
    catch(const int e){
        cout << "Index out of bound!";
        return -1;
    }
    return 0;
}