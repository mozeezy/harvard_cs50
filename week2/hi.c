#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // This is how we printed strings before
  string s = "Hi!";
  printf("%s\n", s);

  // What if we do this. The below is called typecasting, which is the conversion of a variable from one data type into another. in this case, we're converting a char into an integer (which automatically gives us the ASCII value of that character). Notice how we're able to access each char in the string "s" the same way we would access values in an array - using indices.
  printf("%i %i %i \n", s[0], s[1], s[2]);
}