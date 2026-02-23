#include <stdio.h>
#define NMAX 10

// test input -> 3 2 5 10
// output -> 4 25 100

// test input -> 5 1 2 3 4 5
// output -> 1 4 9 16 25

// test input -> invalid
// output -> n/a

int input(int *n, int arr[]);
void output(int n, int arr[]);
void squaring(int n, int arr[]);

int main(void) {
    int n, data[NMAX];
    if (input(&n, data) == 0) {
        squaring(n, data);
        output(n, data);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *n, int arr[]) {
    int k, status = 0;
    if (scanf("%d", n) != 1) {
        status = 1;
    } else {
        for (int i = 0; *n > i; i++) {
            if (scanf("%d", &k) != 1) {
                status = 2;
            } else {
                arr[i] = k;
            }
        }
    }
    return status;
}

void output(int n, int arr[]) {
    for (int i = 0; n > i; i++) {
        printf("%d ", arr[i]);
    }
}

void squaring(int n, int arr[]) {
    for (int i = 0; n > i; i++) {
        arr[i] = arr[i] * arr[i];
    }
}
