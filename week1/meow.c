#include <stdio.h>

int main(void)
{
  // What if I want a cat to meow three times?
  // printf("meow\n");
  // printf("meow\n");
  // printf("meow\n");

  // How about 5 times?
  // printf("meow\n");
  // printf("meow\n");
  // printf("meow\n");
  // printf("meow\n");
  // printf("meow\n");

  // How about a million times? Instead of copying and pasting the same line of code, we could just use loops. This way, we use a fewer lines of code and minimize errors.

  // This will print "meow" forever as long as the conditional inside the parantheses is true.
  while (true)
  {
    printf("meow\n");
  }

  // What if I want to print something a finite number of times using loops?

  int counter = 0;
  while (counter < 3)
  {
    printf("meow\n");
    counter = counter + 1;
  }

  // Another way to write it.

  int i = 1;
  while (i <= 3)
  {
    printf("meow\n");
    i++;
  }

  // For loop.

  for (int i = 0; i < 3; i++)
  {
    printf("meow\n");
  }
}

// -------- Functions --

// To declare a function in C:
// return value function name(parameters or arguments)

void meow(void)
{
  printf("meow\n");
}

// To invoke/call a function:
// function_name();

meow();

// A function can take any number of arguments. But we must declare the data type beforehand

// Function declaration
say_hello(str i)
{
  for (i = 0; i < 3; i++)
  {
    printf("Hello\n");
  }
}

// Function call
say_hello("Moe");