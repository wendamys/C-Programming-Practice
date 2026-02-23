#include <stdio.h>

// test input -> 42
// output -> Hello, 42!

// test input -> -7
// output -> Hello, -7!

// test input -> text
// output -> Hello, 0!

int main() {
    int num;
    scanf("%d", &num);
    printf("Hello, %d!", num);
    return 0;
}