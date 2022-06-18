#include <stdio.h>

int main() {
  int n, sum = 0, i, j;
  scanf("%d", &n);

  for (i=1; i<=n; ++i) {
    sum += i*i;
  }
  printf("The sum of the series is: %d\n", sum);
}
