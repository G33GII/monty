#include "monty.h"

/**
 * _cpFile - Function opens the file pointer and reads each line
 * @_fp: File poimter after it hass been opened
 * Return: void
 */
void _cpFile(FILE *_fp)
{
	char *gline = NULL;
	long int read = 0;
	size_t len = 0;

	while ((read = getline(&gline, &len, _fp)) != EOF)
	{
		Em.LN++;
		if (_isblnk(gline))
			continue;

		Em.STR = gline; /* Em - Extern Monty variable */
		_exe();
	}

	free(gline);
}
