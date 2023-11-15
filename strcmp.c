#include "monty.h"
/**
 * _strcmp - prototype to compare string
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		int n = s1[i] - s2[i];

		if (s1[i] < s2[i])
		{
			putchar ('-');
			return (-n);
		}
		else if (s1[i] > s2[i])
		{
			return (n);
		}
	}

	if (s1[i] == 0 && s2[i] == 0)
	{
		return (0);
	}
	else
	{
		int n = s1[i] - s2[i];

		return (-n);
	}

}