#include <stdio.h>

int main() {
  int n1, n2, i, j, count = 0;
  printf("Enter a number n1: \n");
  scanf("%d", &n1);
  printf("Enter a number n2: \n");
  scanf("%d", &n2);

  printf("The even numnbers are: ");
  for (i=n1+1; i<n2; ++i) {
    if (i%2==0) {
      printf("%d ", i);
      count++;
    }
  }
  printf("\nThe total numbers of even numbers are: %d\n", count);



}
