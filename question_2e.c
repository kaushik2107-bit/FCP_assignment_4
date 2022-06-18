#include <stdio.h>

int main() {
  int n, i, j;
  scanf("%d", &n);

  for (int i=1; i<2*n; ++i) {
    for (int j=1; j<=n; ++j) {
      if (i<=n) {
        if(j<=i) printf("%d", j);
      } else {
        if(j<=2*n-i) printf("%d", j);
      }
    }
    printf("\n");
  }
}
