#include<stdio.h>

// sizeof() is a special function that returns an integer that is the size of the array in bytes.

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;
  
  // Checkpoint 1 code goes here.
  len = sizeof(arr)/sizeof(double); //This is how to set the variable len to the length of the array arr.
  printf("%i\n", len);

  // Checkpoint 2 code goes here.
  for(int f = 0; f < len; f++){
    printf("%f\n", arr[f]);         //To print 'double' : use %f
  }
}