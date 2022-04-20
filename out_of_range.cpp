#include "out_of_range.h"

namespace lab
{
    string out_of_range::what()
    {
        return this->text;
    }

    out_of_range::out_of_range(string s)
    {
        this->text = s;
    }

    out_of_range::out_of_range()
    {
        this->text = "Error: out_of_range";
    }

    out_of_range::~out_of_range() = default;
}

