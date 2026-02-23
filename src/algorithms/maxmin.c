#include <stdio.h>

// test input -> 10 5 15
// output -> 15 5

// test input -> -100 0 42
// output -> 42 -100

// test input -> 10 hello 30
// output -> n/a

void maxmin(int prob1, int prob2, int prob3, int *max, int *min);

int main() {
    int status = 0;
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("n/a");
        status = 1;
    } else {
        int max, min;

        maxmin(x, y, z, &max, &min);

        printf("%d %d", max, min);
    }
    return status;
}

void maxmin(int prob1, int prob2, int prob3, int *max, int *min) {
    *max = prob1;
    *min = prob1;

    if (prob2 > *max) {
        *max = prob2;
    }
    if (prob2 < *min) {
        *min = prob2;
    }
    if (prob3 > *max) {
        *max = prob3;
    }
    if (prob3 < *min) {
        *min = prob3;
    }
}
