#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *s;
        int i, j, len1, len2;

        if (s1 == NULL)
		s1 = "";
        if (s2 == NULL)
                s2 = "";

        len1 = len2 = 0;
        for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0'; i++)
		len2++;
	s = malloc(sizeof(char) * (len1 + len2+1));
	if (s == NULL)
		return (NULL);
 	for (i = 0; s1[i] != '\0'; i++)
  		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)											        {
		s[i] = s2[j];														i++;
        }
	s[i] = '\0';
	return (s);
}
