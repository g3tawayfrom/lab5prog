#include <iostream>
#include "Array.h"
#include <math.h>

using namespace lab;
using namespace std;

template <int N, class T>
T inDegree (T *x) {
    return pow(*x, N);
}

int main()
{
    float x, y;
    cin >> x;
    x = inDegree<4, float>(&x);
    cout << x << endl;
    Array<float, 10> arr;
    arr.getE(11);
    arr.addE(10, 4);

    return 0;
}
