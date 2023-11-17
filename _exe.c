#include "monty.h"

/**
 * _exe - Execution
 * Return: void
 */
void _exe(void)
{
	/**
	 * Tokenization of each line from geline
	 * "first = En.FUNC" "sescond = Em.VALUE"
	 */
	_strtoken();

	/* printf("%s\n%s\n", Em.FUNC, Em.VALUE); */
	_FS(); /* Function Selection and Call */
}
