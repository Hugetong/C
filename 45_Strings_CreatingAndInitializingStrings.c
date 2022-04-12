#include<stdio.h>

int main() {
  // Creating an initialized array of characters populated by the characters of the string.
  char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'}; 
  // "\0" signifies the end of the string and must be included when creating a string as an initialized array.
  
  // Creating a string variable in C is to use what is called a "strin literal". 
  // This is the creation of a string by initializing the char array with the full string in double quotes.
  char compCode[] = "Computer Code";
  // Checkpoint 3 code goes here   
  printf("%s\n", comp);
  printf("%s\n", compCode);
  //"%s" signify that printf() is working with a string.
}