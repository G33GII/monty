#include "monty.h"

/**
 * _FS - Function pointer Selection
 * Return: char pointer
 */
void (*_FS(void))(stack_t **stack, unsigned int line_number)
{
	int x = 0;

	/* KF - Key Function Pair : OPCODE pair */
	instruction_t KF[] = {
		{"pop", _pop},
		{"mod", _mod},
		{"mul", _mul},
		{"nop", _nop},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"swap", _swap},
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{NULL, NULL},
	};

	if ('#' == Em.FUNC[0])
		return (NULL);

	for (; KF[x].k; x++)
	{
		if (!(strcmp(KF[x].k, Em.FUNC)))
		{
			KF[x].f(&Em.STACKH, Em.LN);
			return (NULL);
		}
	}
	/* At this pointer no matching function name found therefore error message */
	fprintf(stderr, "L%d: unknown instruction %s\n", Em.LN, Em.FUNC);
	_EXITFAILURE();
	return (NULL);
}
