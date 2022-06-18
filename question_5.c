#include <stdio.h>

int main() {
  int n1, n2, i, j, sum =0, tmp0, tmp1;
  printf("Enter a four digit number :\n");
  scanf("%d", &n1);
  printf("Enter another four digit number :\n");
  scanf("%d", &n2);

  while(n1) {
    tmp0 = n1%10;
    n1 /= 10;
    tmp1 = n2%10;
    n2 /= 10;

    sum += tmp0*tmp1;
  }

  printf("The sum is : %d\n", sum);
}
