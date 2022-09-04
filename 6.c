#include <stdio.h>

long square_sum;
long sum_square;

int main() {
  for (int i = 1; i <= 100; i++) sum_square += i*i;
  for (int j = 1; j <= 100; j++) square_sum += j;
  square_sum *= square_sum;
  long difference = square_sum - sum_square;
  printf("%ld\n", difference);
}
