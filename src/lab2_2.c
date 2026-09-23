#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long sum = 1;
  for (int i = 1; i <= n ; i++) {
    sum *= i;
  }
  return sum;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);
  if (n < 1) {
    printf("Error: the entered value is negative.\n");
  } else {
    int result = factorial(n);
    printf("the factorial of %d is = to %d.\n", n, result);
  }
  return 0;
}
