#include <stdio.h>
#include <stdlib.h>

// test input -> 5 5 2 8 1 3
// output -> 1 2 3 5 8

// test input -> 3 10 -5 0
// output -> -5 0 10

// test input -> 0
// output -> n/a

// test input -> 3 10 abc 20
// output -> n/a


void read_mass(int n, int arr[]);
void sort(int n, int arr[]);

int main() {
  int n, k;
  int ok = 1; // 1 = всё хорошо, 0 = ошибка

  printf("Введите размер массива: ");
  if (scanf("%d", &n) != 1) {
    printf("n/a");
    ok = 0;
  }

  if (ok == 1 && n <= 0) { // проверка на корректный размер массива
    printf("n/a");
    ok = 0;
  }

  if (ok == 1) { //  выполняется если предыдущие проверки прошли
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
      printf("n/a");
      ok = 0;
    } else {
      for (int i = 0; i < n && ok == 1; i++) { // цикл ввода с полной проверкой
        if (scanf("%d", &k) == 1) {
          arr[i] = k;
        } else {
          printf("n/a");
          ok = 0;
        }
      }

      if (ok == 1) { // сортировка и вывод если всё успешно
        sort(n, arr);
        read_mass(n, arr);
      }

      free(arr); // освобождаем память в любом случае
      arr = NULL;
    }
  }

  return (ok == 1) ? 0 : 1;
}

void read_mass(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

void sort(int n, int arr[]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}