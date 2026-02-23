#include <math.h>
#include <stdio.h>
#define NMAX 30

// test input -> 5 10 2 13 15 4
// output -> 10

// test input -> 3 1 3 5
// output -> 0

// test input -> abc
// output -> n/a

int input(int *n, int arr[]);
double mean(const int *n, const int arr[]);
double variance(const int *n, const int arr[]);

int main() {
    int n, data[NMAX];

    if (input(&n, data) != 0 || n == 0) {
        printf("n/a");
        return 0;
    }

    double m = mean(&n, data);
    double var = variance(&n, data);
    double sigma = sqrt(var);
    int found = 0;

    for (int i = 0; i < n; i++) {
        int x = data[i];
        if (x != 0 && x % 2 == 0 && x >= m && fabs(x - m) <= 3 * sigma) {
            printf("%d", x);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("0");
    }

    return 0;
}

double mean(const int *n, const int arr[]) {
    double j = 0;
    for (int i = 0; *n > i; i++) {
        j += arr[i];
    }
    j = j / *n;
    return j;
}

double variance(const int *n, const int arr[]) {
    double j = 0;
    double result_mean = mean(n, arr);
    for (int i = 0; *n > i; i++) {
        j += (arr[i] - result_mean) * (arr[i] - result_mean);
    }
    j = j / *n;
    return j;
}

int input(int *n, int arr[]) {
    int k, status = 0;
    if (scanf("%d", n) != 1 || *n <= 0 || *n > NMAX) {
        status = 1;
    } else {
        for (int i = 0; *n > i; i++) {
            if (scanf("%d", &k) != 1) {
                status = 1;
                break;
            } else {
                arr[i] = k;
            }
        }
    }
    return status;
}