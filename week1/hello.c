// Printing "hello world" in C.

#include <cs50.h> // .h refers to header files -> files that contain a bunch of functions; a library
#include <stdio.h>

int main(void)
{
  string answer = get_string("What is your name? ");
  printf("hello, %s\n", answer);
}