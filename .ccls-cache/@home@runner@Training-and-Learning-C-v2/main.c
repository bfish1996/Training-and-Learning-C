#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char* j = get_string("What's J?:  ");
  char* k = get_string("What's K?:  ");

  if (strcmp(j, k) == 0)
  {
    printf("J is equal to K\n");
  }
  else
  {
    printf("Nope\n");
  }
}