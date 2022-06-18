#include <stdio.h>

int main() {
  int n, i, j, sum =0, tmp;
  scanf("%d", &n);

  while (n) {
    tmp = n%10;
    sum += tmp*tmp;
    n /= 10;
  }
  printf("The sum of square of each digit of the given number: %d\n", sum);
}
