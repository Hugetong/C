#include<stdio.h>

int main() {
  
  int k = 2000;
  int* ptr = &k;
  
  // Checkpoint 1 code goes here.
  printf("%i\n", *ptr);   //print the data stored in the memory address that ptr is pointing to. 

  // Checkpoint 2 code goes here.
  *ptr = 961;             //change the value contained in the memory address pointed to by ptr from 2000 to 961;
  
  printf("%i\n", k); // Notice how this variable changed value after Checkpoint 2!
}
