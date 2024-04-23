#include <stdio.h>
#include <cs50.h>
#include <string.h>

void draw(int n);

typedef char* Yay;

int main(void)
{
  Yay s = "HI!";
  printf("%s\n", s);
  printf("%c", s[0]);
  printf("%c", s[1]);
  printf("%c\n", s[2]);
  printf("%c\n", *s);
  printf("%c\n", *(s+1));
  printf("%p\n", &s[2]);
}
