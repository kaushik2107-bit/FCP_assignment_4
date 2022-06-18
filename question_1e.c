#include <stdio.h>

int factorial(int n) {
  if (n==0) return 1;
  else return n*factorial(n-1);
}

int main() {
  int n, i, j, tmp0, tmp1, sum=0;
  scanf("%d", &n);
  tmp0 = n;
  while(tmp0) {
    tmp1 = tmp0%10;
    sum += factorial(tmp1);
    tmp0 /= 10;
  }

  if (sum == n) {
    printf("%d is a Strong Number.", n);
  } else {
    printf("%d is not a Strong Number.", n);
  }
}
