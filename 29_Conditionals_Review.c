#include <stdio.h>

int main() {

  double weight;
  int Planet;
  printf("What is your earth weight?: ");
  scanf("%lf", &weight);

  printf("Enter a umber for the planet you want to fight: ");
  scanf("%d", &Planet);

  switch (Planet){
    case 1:
      printf("%lf * 0.38 = %lf", weight, weight*0.38);
    break;
    case 2:
      printf("%lf * 0.91 = %lf", weight, weight*0.91);
      break;
    case 3:
      printf("%lf * 0.38 = %lf", weight, weight*0.38);
      break;
    case 4:
      printf("%lf * 2.34 = %lf", weight, weight*2.34);
      break;
    case 5:
      printf("%lf * 1.06 = %lf", weight, weight*1.06);
      break;
    case 6:
      printf("%lf * 0.92 = %lf", weight, weight*0.92);
      break;
    case 7:
      printf("%lf * 1.19 = %lf", weight, weight*1.19);
      break;
    
      
  }








}