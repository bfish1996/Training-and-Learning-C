#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  char* s = get_string("S: "); 
  char* t = malloc(strlen((s) + 1));

  strcpy(t, s);

  if (strlen(t) > 0)
  {t[0] = toupper(t[0]);
  }

  printf("%s\n", s);
  printf("%s\n", t);

  free(t);
  return 0;
}