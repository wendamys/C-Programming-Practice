#include <math.h>
#include <stdio.h>

// test input -> (нет ввода)
// output -> OK!

double fun();

int main() {
    double res = fun();
    const double EPSILON = 1e-6;

    if (fabs(res - 0) < EPSILON) {
        printf("OK!");
    }
    return 0;
}

double fun() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }

