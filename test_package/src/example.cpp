#include "testlib.h"
#include <vector>
#include <string>

int main() {
    testlib();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    testlib_print_vector(vec);
}
