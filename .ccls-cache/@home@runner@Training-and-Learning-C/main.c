#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

//phonebook.c

int main(void)
{
  FILE *file = fopen("phonebook.csv", "a");

  char* name = get_string("Name: ");
  char* number = get_string("Number: ");

  fprintf(file, "%s, %s\n", name, number);

  fclose(file);
}