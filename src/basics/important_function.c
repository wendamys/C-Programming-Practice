#include <math.h>
#include <stdio.h>

// test input -> 1
// output -> -1955.4

// test input -> 10
// output -> -112.1

// test input -> qwerty
// output -> n/a


int main() {
    int x;
    double out;
    char *error_flag = "n/a";
    if (scanf("%d", &x) != 1) {
        printf("%s", error_flag);
        return -1;
    } else {
        out = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1.0 / 3.0) - 1e3) * x + 3) / (pow(x, 2) / 2) -
              x * pow((10 + x), 2 / x) - 1.01;
        printf("%.1f", out);
        return 0;
    }
}