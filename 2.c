#include <stdio.h>

int sum;
int a, b, c;

int main() {
  a = 0;
  b = 1;
  c = a + b;
  while (c < 4000000) {
    if (c % 2 == 0) sum += c;
    b = a;
    a = c;
    c = a + b;
  }
  printf("%d\n", sum);
}
