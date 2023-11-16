#include "monty.h"
/**
 * 
 * 
*/
int isint(char *s)
{
    int a;

    for (a = 0; s[a] != '\0'; a++)
    {
        if (s[a] > 57 || s[a] < 47)
        {
            return (0);
        }
    }
    return (1);
}