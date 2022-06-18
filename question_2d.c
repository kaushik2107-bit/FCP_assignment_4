#include <stdio.h>

int main() {
  int n, i, j;
  scanf("%d", &n);

  for (i=1; i<=n; ++i) {
    for (j=1; j<=2*n; ++j) {
      if (j<=n) {
        if (j<=i) {
          printf("%d", j);
        } else {
          printf(" ");
        }
      } else {
        if (j>=2*n-i+1) {
          printf("%d", 2*n-j+1);
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
}
