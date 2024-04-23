#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char* j = get_string("What's J?:  ");
  char* k = get_string("What's K?:  ");

  printf("%p\n", j);
  printf("%p\n", k);

}