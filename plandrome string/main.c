#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];

  printf("Enter a string to check if it is a palindrome\n");
  gets(a);

  strcpy(b, a);
  strrev(b);

  if (strcmp(a, b) == 0)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
