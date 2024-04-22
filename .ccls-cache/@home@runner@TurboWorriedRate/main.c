#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
  string numbers[] = {"555-1234", "555-4321", "555-5555", "555-0000", "555-1111"};

  string name = get_string("Name: ");
  for (int i = 0; i < 5; i++)
    {
      if (strcmp(names[i], name) == 0)
      {
        printf("Found %s\n", numbers[i]);
        return 0;
      }
    }
  printf("Not found\n");
  return 1;
}