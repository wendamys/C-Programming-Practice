#include <stdio.h>

// test input -> 10 2
// output -> 12 8 20 5

// test input -> 10 0
// output -> 10 10 0 n/a

// test input -> abc 5
// output -> n/a


int sum(int a, int b) { return (a + b); }

int raznost(int a, int b) { return (a - b); }

int del(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return (a / b);
    }
}

int multiply(int a, int b) { return (a * b); }

int main() {
    int num1, num2;
    char *error_flag = "n/a";
    if (scanf("%d %d", &num1, &num2) == 2) {
    } else {
        printf("n/a");
        return -1;
    }

    if (del(num1, num2) == 0) {
        printf("%d %d %d %s", sum(num1, num2), raznost(num1, num2), multiply(num1, num2), error_flag);
    } else {
        printf("%d %d %d %d", sum(num1, num2), raznost(num1, num2), multiply(num1, num2), del(num1, num2));
    }
    return 0;
}
