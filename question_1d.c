#include <stdio.h>

int main() {
  int n, i, sum =0, tmp0, tmp1;
  scanf("%d", &n);
  tmp0 = n;

  while (tmp0) {
    tmp1 = tmp0%10;
    sum += tmp1*tmp1*tmp1;
    tmp0 /= 10;
  }

  if (sum == n) {
    printf("%d is an Armstrong Number.\n", n);
  } else {
    printf("%d is not an Armstrong Number.\n",  n);
  }


}
