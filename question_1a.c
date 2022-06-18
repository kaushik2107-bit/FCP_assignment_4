#include <stdio.h>

int main() {
  int n, i, sum =1;
  scanf("%d", &n);
  for (i=2; i<=n; ++i) {
    if (i%2 == 0) {
      sum+=i*i;
    } else {
      sum += -i*i;
    }
  }

  printf("The sum of the series is: %d\n", sum);
}
