#include <arithmetic/add.h>
#include <arithmetic/sub.h>
#include <arithmetic/mul.h>
#include <arithmetic/div.h>

#include <printer/print.h>

#include <fmt/core.h>

namespace core
{
    void printResults(int a, int b)
    {
        fmt::print("{} + {} = {}\n", a, b, add(a, b));
        fmt::print("{} - {} = {}\n", a, b, sub(a, b));
        fmt::print("{} * {} = {}\n", a, b, mul(a, b));
        fmt::print("{} / {} = {}\n", a, b, div(a, b));
    }
}