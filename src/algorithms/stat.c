#include <stdio.h>
#define NMAX 10

// test input -> 5 1 2 3 4 5
// output -> 1 2 3 4 5
// 5 1 3.000000 2.000000

// test input -> 3 10 20 30
// output -> 10 20 30
// 30 10 20.000000 66.666667

// test input -> abc
// output -> n/a



int input(int *n, int arr[]);
void output(int n, int arr[]);
void max(int n, const int arr[]);
void min(int n, const int arr[]);
double mean(const int *n, const int arr[]);
double variance(int *n, int arr[]);

int main() {
    int n, data[NMAX];
    if (input(&n, data) == 0) {
        output(n, data);
        max(n, data);
        min(n, data);
        variance(&n, data);
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
    printf("\n");
}

void max(int n, const int arr[]) {
    int j = arr[0];
    for (int i = 0; n > i; i++) {
        if (j < arr[i]) {
            j = arr[i];
        }
    }
    printf("%d ", j);
}

void min(int n, const int arr[]) {
    int j = arr[0];
    for (int i = 0; n > i; i++) {
        if (j > arr[i]) {
            j = arr[i];
        }
    }
    printf("%d ", j);
}

double mean(const int *n, const int arr[]) {
    double j = 0;
    for (int i = 0; *n > i; i++) {
        j += arr[i];
    }
    j = j / *n;
    printf("%f ", j);
    return j;
}

double variance(int *n, int arr[]) {
    double j = 0;
    double result_mean = mean(n, arr);
    for (int i = 0; *n > i; i++) {
        j += (arr[i] - result_mean) * (arr[i] - result_mean);
    }
    j = j / *n;
    printf("%f ", j);
    return j;
}
