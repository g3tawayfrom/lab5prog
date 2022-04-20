#include <iostream>
#include "Array.h"

using namespace std;

namespace lab
{
    template<class T, int N>
    Array<T, N>::Array()
    {
        arr.resize(N);
    }

    template<class T, int N>
    T Array<T, N>::getE(int i)
    {
        try {
            if (this->arr.size() <= i) throw out_of_range("Index is out of range!");
        }
        catch (out_of_range &exception) {
            cout << exception.what() << endl;
        };
        return arr[i];
    }

    template<class T, int N>
    void Array<T, N>::addE(int i, T x)
    {
        try {
            if (this->arr.size() <= i) throw out_of_range("Index is out of range!");
            arr[i] = x;
        }
        catch (out_of_range &exception) {
            cout << exception.what() << endl;
        };
    }

    template<class T, int N>
    int Array<T, N>::length()
    {
        return arr.size();
    }

    template
            class Array<int, 10>;

    template
            class Array<float, 10>;
}