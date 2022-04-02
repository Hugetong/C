/*

* To indicate a variable type you want to replace:

symbol     |    type
-------------------------------------
%d or %i   |    int
-------------------------------------
%f         |    double or float
-------------------------------------
%c         |    char

* Reserved symbols within the string to have invoked formatting:

symbol     |    effect
-------------------------------------
\n         |    newline
-------------------------------------
\r         |    carriage return
-------------------------------------
\t         |    tab

*/

#include <stdio.h>

int main() {
  
 int ageLearnedToRide = 5;


 printf("I was %d years old when I learned to ride a bike.\n", ageLearnedToRide); //ad %d between 'was' and 'years', then add a comma to indicate your list of parameters to get the values from and add the variable ageLearnedToRide
 printf("I hope I still remember how to ride.");
}
