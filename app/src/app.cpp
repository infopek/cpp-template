#include <arithmetic/add.h>
#include <arithmetic/sub.h>
#include <arithmetic/mul.h>
#include <arithmetic/div.h>

#include <printer/print.h>

int main()
{
    int a = 5;
    int b = 4;

    int res1 = core::add(a, b);
    int res2 = core::sub(a, b);
    int res3 = core::mul(a, b);
    double res4 = core::div(a, b);

    core::printResults(a, b);
}