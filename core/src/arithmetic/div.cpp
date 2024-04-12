#include <arithmetic/add.h>

#include <cassert>

namespace core
{
    double div(int a, int b)
    {
        assert(b != 0 && "Division by zero");
        return static_cast<double>(a) / b;
    }
}