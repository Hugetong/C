#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modiy the code below
int getRandom1000() {   //void 나 int가 return type
  int random1000 = rand() % 1000 + 1;
  return random1000;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandom1000();
  printf("My random number is: %d", randomNumber);
  return randomNumber;
}