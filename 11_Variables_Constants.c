#include <stdio.h>

int main() {
  
// Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;

 // SPEEDOFLIGHT = 1.86; The program now violates the rules of constants. We know the speed of light won’t change, so this function is no need


  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

}