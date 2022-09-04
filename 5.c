#include <stdio.h>

int counter;

int main() {
  int i = 1;
  while (i < 1000000000) {
    for (int x = 1; x <= 20; x++) {
      if (i % x == 0) {
        counter++;
        if (counter == 20) {
          printf("%d\n", i);
          break;
        }
      }
    }
  counter = 0;
  i++;
  }
}
