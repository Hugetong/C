#include <stdio.h>

int main() {
  char p[] = "procezzor";
  // Checkpoint 1 code goes here
  p[2] = 'o';
  printf("%s\n", p);
  // Checkpoint 2 code goes here
  p[5] = 's';
  p[6] = 's';

  printf("%s", p);
}