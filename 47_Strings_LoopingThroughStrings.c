#include<stdio.h>
#include<string.h>

int main() {

  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";

  for(int i = 0; i < strlen(s); i++){
    s[i] = '*';
    //This is how to loop the string s and replace every character in the string with the character '*'.
  }

  printf("%s\n", s);
  
  for(int i = 0; i < strlen(p)/2; i++){
    p[i] = '#';
    //This is how to loop through the string and replace the first half with '#'s
  }

  printf("%s", p);
}
