#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define TESTLIB_EXPORT __declspec(dllexport)
#else
  #define TESTLIB_EXPORT
#endif

TESTLIB_EXPORT void testlib();
TESTLIB_EXPORT void testlib_print_vector(const std::vector<std::string> &strings);
