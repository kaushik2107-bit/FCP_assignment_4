#include <stdio.h>

int factorial(int n) {
  if (n==0) return 1;
  else return n*factorial(n-1);
}

int power(int a, int b) {
  if (b==0) return 1;
  else  return a*power(a, b-1);
}

int main() {
  int x, n, i, j;
  float sum=0;
  scanf("%d %d", &x ,&n);

  for (i=1; i<=n; ++i) {
    if (i%2 == 0) {
      sum += -((float)(power(x, 2*i-1)))/factorial(2*i-1);
    } else {
      sum += ((float)(power(x, 2*i-1)))/factorial(2*i-1);
    }
  }

  printf("The sum of the series is : %f\n", sum);


}
