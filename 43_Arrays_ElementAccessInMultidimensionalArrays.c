#include<stdio.h>

/*how to recall identities:
rowDimension = sizeof(matrix)/sizeof(matrix[0]);
columnDimension = sizeof(matrix[0])/sizeof(dataType); */

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Checkpoint 1 code goes here.
  int num = matrix[3][1];
  printf("%i\n", num);  //This is how to print the element that is in the fourth row and second column of matrix
  
  // Checkpoint 2 code goes here.
  for(int i = 0; i < sizeof(matrix)/ sizeof(matrix[0]); i++){
    for(int j = 0; j < sizeof(matrix[0])/sizeof(int); j++){
      sum += matrix[i][j];
    }
  }
}