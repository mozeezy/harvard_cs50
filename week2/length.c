#include <stdio.h>
#include <cs50.h>
#include <string.h> // This header file has a function called strlen which measures the legnth of a string.

// This program figures the length of the string that's typed in.

int main(void)
{
  // prompt the user to enter a string
  string name = get_string("Name: ");

  // declare a variable to count
  int i = 0;
  // while loop - looks at every character in the string typed. if that char is not a NUL then increment by 1. the loop ends when name[i] = '\0' (aka a NUL character which indicates an end of a string)
  while (name[i] != '\0')
  {
    i++;
  }
  printf("%i\n", i);

  int length = strlen(name);
  printf("%i\n", length);
}