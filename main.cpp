#include <iostream>
#include "Array.h"

using namespace lab;
using namespace std;

int main()
{
    Array<int, 10> arr;
    arr.addE(0, 4);
    cout << arr.getE(0);
    return 0;
}
