#include <stdio.h>

int main() {

  int a = 10;
  int b = 5;
  int min;

  // Print out the smaller number with return
  min = a < b ? a : b;
  printf("%d\n", min);
  /* The ? marks the check for the condition, as if asking it as a question. 
  If a is the smaller number, the condition passes with true, 
  which executes the left-hand side of the : and stores a into min. 
  If the condition was false, then the right-hand side of the : executes, which stores b into min instead */

  /* The first demonstrates how the ternary operator can return a value. */

  // Print out the smaller number without return
  a < b ? printf("%d\n", a) : printf("%d\n", b);
  /* The second demonstrates how the ternary operator can be used without returning a value. */
}