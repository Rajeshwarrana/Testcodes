// fn_overloading.cpp
// Demonstrates function overloading in C++ by providing two
// overloads of the function `add` (one for ints, one for doubles)
// and calling each from main. The program prints the summed results.

#include <iostream>

// Add two integers and return an integer result.
// This overload is selected when both arguments are integral types.
int add(int a, int b) {
    return a + b;
}

// Add two doubles and return a double result.
// This overload is selected when at least one argument is a floating
// point type or both are doubles (exact match preferred).
double add(double a, double b) {
    return a + b;
}

int main() {
    // Call the int overload (both arguments are int literals)
    int res1 = add(1, 10);

    // Call the double overload (arguments are double literals)
    double res2 = add(1.002, 10.54);

    // Print results. Note that types are preserved by the overloads:
    // res1 is an int and res2 is a double.
    std::cout << "INTEGRAL ADDITION : " << res1 << std::endl;
    std::cout << "FLOATING POINT ADDITION : " << res2 << std::endl;
    std::cout << "BOTH ARE RUNNING BY SAME NAME FUNCTION 'add'" << std::endl;
    return 0;
}

// Notes:
// - Function overloading lets you use the same function name with
//   different parameter types or counts. The compiler chooses the
//   best match at compile time.
// - Edge cases: mixing ints and doubles will cause implicit
//   conversions; an overload with exact match is preferred.