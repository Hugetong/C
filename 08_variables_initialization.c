/*
There are two ways to set a value:

1)
int example = 3;

In this case, not only have you created the variable, named it example, and identified it to hold whole numbers, 
you have set its value to be 3. 

2)
char example = 'babo';

When declaring char, you need single quotes around it.
*** As a char it can only take one digit, so for example '7' would be valid but '70' would not be. ***
*/

#include <stdio.h>

int main() {
  
  int numOfBooks = 3;
  char favLetter = 'a';
  char favDigit = '4';
  double costOfCandyBar = 5.34;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}

