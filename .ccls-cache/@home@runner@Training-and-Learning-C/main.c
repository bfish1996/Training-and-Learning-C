#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// list.c

typedef struct node
{
  char* name;
  char* number;
  struct node *next;
} node;

int main(void)
{
  node * table[26];
}

int hash (const char* word)
{
  return toupper(word[0] - 'A');
}