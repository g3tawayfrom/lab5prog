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
        return arr[i];
    }

    template<class T, int N>
    void Array<T, N>::addE(int i, T x)
    {
        arr[i] = x;
    }

    template<class T, int N>
    int Array<T, N>::length()
    {
        return N;
    }

    template
            class Array<int, 10>;

    template
            class Array<float, 10>;
}