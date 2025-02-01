#include <arithmetic/add.h>

#include <cassert>
#include <stdexcept>

namespace core {
    double div(int a, int b) {
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        return static_cast<double>(a) / b;
    }
}
