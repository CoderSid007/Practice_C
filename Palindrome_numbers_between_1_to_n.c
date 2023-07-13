#include <stdio.h>

int main() {
  int n, i, temp, rev = 0;

  printf("Enter the last number: ");
  scanf("%d", &n);

  printf("Palindrome numbers between 1 and %d are: ", n);
  for (i = 1; i <= n; i++) {
    temp = i;
    while (temp > 0) {
      rev = rev * 10 + temp % 10;
      temp /= 10;
    }
    if (rev == i) {
      printf("%d ", i);
    }
    rev = 0;
  }
  
}