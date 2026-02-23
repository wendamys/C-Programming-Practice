#include <stdio.h>

// test input -> 10 20
// output -> 20

// test input -> 5 5
// output -> 5

// test input -> 10 20.5
// output -> n/a

// test input -> abc 10
// output -> n/a

int max(int a, int b) {
    if (a == b) {
        return a;
    } else if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    char *error_flag = "n/a";
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("%s", error_flag);
        return -1;
    } else {
        if (getchar() != '\n') {
            printf("n/a");
            return 0;
        }
        printf("%d", max(num1, num2));
        return 0;
    }
}
