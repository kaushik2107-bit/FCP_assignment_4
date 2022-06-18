#include <stdio.h>

int main() {
  int n, i, j, k;
  scanf("%d", &n);

  for (i=1; i<=n; ++i) {
    for (j = 0; j<n-i; ++j) {
      printf(" ");
    }
    for (int j=0; j<i; ++j) {
      printf("* ");
    }
    printf("\n");
  }
}
