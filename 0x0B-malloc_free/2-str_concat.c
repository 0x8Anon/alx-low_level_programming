#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
char *result;
int i,j;
int length1;
int length2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
length1 = 0;
while(s1[length1] != '\0')
{
length1++;
}
length2 = 0;
while(s2[length2] != '\0')
{
length2++;
}
result = (char *)malloc(length1 + length2 + 1);
if(result == NULL)
{
return NULL;
}
for(i = 0; i < length1; i++)
{
result[i + j] = s1[i];
}
j = 0;
for(j = 0; j < length2; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return result;		
}
