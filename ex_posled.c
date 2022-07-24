#include <stdio.h>

void input(int*, int*);
void sort(int*, int);

int main() {
  int a[100];
  int count;
  input(a, &count);
  sort(a, count);
  return 0;
}

void input(int a[], int* count) {
  int i = 0, c = 0;
  while (i != -1) {
    if (scanf("%d", &i) != 1 || i < -1) {
      printf("n/a");
    } else {
      a[c] = i;
      c++;
    }
  }
  *count = c - 1;
}

void sort(int* a, int count) {
  for (int i = 0; i < count; i++) {
    if (i % 2 == 0)
      printf("%d ", a[i / 2]);
    else
      printf("%d ", a[count - (i + 1) / 2]);
  }
  printf("\b");
}
