#include <stdio.h>

int main() {
  int n, i, j;
  char c = 'A';
  scanf("%d", &n);
  for (i=1; i<2*n; ++i) {
    if (i%2!=0) {
      for (j = 0; j<=2*n-i-2; ++j) {
        printf(" ");
      }
      for (int j=0; j<i; ++j) {
        printf("%c ", (int)c+2*j);
      }
      printf("\n");
    }
  }
  for (i=2*n-2; i>=0; --i) {
    if (i%2!=0) {
      for (j = 0; j<=2*n-i-2; ++j) {
        printf(" ");
      }
      for (int j=0; j<i; ++j) {
        printf("%c ", (int)c+2*j);
      }
      printf("\n");
    }
  }
}
