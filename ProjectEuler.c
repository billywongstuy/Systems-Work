#include <stdio.h>
#include <stdlib.h>

int sum1000of3n5() {
  int sum = 0;
  int start = 999;
  while (start) {
    if (start%3 == 0 || start%5 == 0) {
      sum += start;
    }
    start--;
  }
  return sum;
}


int evenFibonnaci4M() {
  int x = 1;
  int y = 2;
  while (x < 4000000 && y < 4000000) {
    
  }
  return 0;
}


int main() {
  printf("%d\n",sum1000of3n5());
}
