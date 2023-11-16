#include "monty.h"

/**
 * _FS - Function Selection
 * _rmwhitespace -
 * Return: char pointer
 */
void (*_FS(void))(stack_t **stack, unsigned int line_number)
{
	int x = 0;

	/* KF - Key Function Pair */
	instruction_t KF[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mod", _mod},
		{NULL, NULL},
	};
	if (Em.FUNC[0] == '#' || !Em.FUNC)
	{
		return (_nop);
	}

	for (; KF[x].k; x++)
	{
		if (!(strcmp(KF[x].k, Em.FUNC)))
		{
			KF[x].f(&Em.STACK, Em.LN);
			return (NULL);
		}
	}
	/**
	  * At this pointer no matching function call was found
      * therefore an error message
	  * free(Em.FUNC);
	  */
	fprintf(stderr, "L%d: unknown instruction %s\n", Em.LN, Em.FUNC);
	free_STACK(Em.STACK);
	free(Em.STR);
	exit(EXIT_FAILURE);
}
