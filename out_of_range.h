#pragma once
#include <iostream>

using namespace std;

namespace lab
{
    class out_of_range : public exception
    {
    private:
        string text;
    public:
        out_of_range();

        explicit out_of_range(string s);

        string what();

        ~out_of_range();
    };

}