#include<stdio.h>

int main() {
  
  double g = 9.81;
  double pi = 3.14;
  
  // Checkpoint 1 code goes here.
  double* dblPtr = &g;  //assign the address of variable g to the pointer
  // Checkpoint 2 code goes here.
  printf("%p", dblPtr);
  // Checkpoint 3 code goes here.
  dblPtr = &pi;         //reassign dblPtr to the address of the variable pi
}
