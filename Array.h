#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace lab {
    template<class T, int N>
    class Array
    {
    private:
        vector<T> arr;
    public:
        Array();
        T getE(int);
        void addE(int, T);
        int length();
    };
}