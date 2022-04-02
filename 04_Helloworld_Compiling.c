#include <stdio.h>

int main() {
  // output a line
  printf("Hello World!\n");
}

/* < how to compile >

in terminal: gcc helloworld_compiling.c -o helloworld_compiling
-> gcc : is how we run the compiler application
-> helloworld_compiling.c : is the filename of our code to be compiled
-> helloworld_compiling : is an optional but common addition to the command. 
                          It tells gcc to output the program executable under the name helloWorld. 
                          If this is left out, the executable file will be called a.out.

After running the command we have an executable, but how do we run our code? 
We can run the executable with the following command, again using the terminal: ./helloworld_compiling */

