#include <stdio.h>

// test input -> 3 4
// output -> GOTCHA

// test input -> 6 1
// output -> MISS

// test input -> abc
// output -> n/a

int main() {
    float x, y, rad;
    char *error_flag = "n/a";
    if (scanf("%f %f", &x, &y) != 2) {
        printf("%s", error_flag);
        return -1;
    } else {
        rad = (x * x) + (y * y);
        if (rad <= 25) {
            printf("GOTCHA");
        } else {
            printf("MISS");
        }
        return 0;
    }
}