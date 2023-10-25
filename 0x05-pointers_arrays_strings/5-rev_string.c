#include "main.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: the charachter being read in
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
int c;
char temp;
while (s[j] != '\0')
{
j++;
}
c = j - 1;
for (i = 0; i < c; i++, c--)
{
temp = s[i];
s[i] = s[c];
s[c] = temp;
}
}
