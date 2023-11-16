#ifndef MONTY_H
#define MONTY_H

/** 
* Placed before the <stdio.h>
* Ensures getline extensions are available 
*/
#define _GNU_SOURCE

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <ctype.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *next;
	struct stack_s *prev;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *k;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct _op_ -
 * @line_number:
 * @_str:
 *
 * Description:
 */
typedef struct monty_
{
	unsigned int LN;
	char *STR;
	char *FUNC;
	char *VALUE;
	stack_t *STACK;
	/*
	stack_t **HD;
	stack_t **TL;
	*/
} _MONTY;


extern _MONTY Em;
/*
unsigned int _lineCount(FILE *_b);
void _rmwhitespace(void);
void _free(char **dp);
int isINT(char *s);
*/

void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);

void (*_FS(void))(stack_t **stack, unsigned int line_number);
void _ismonty_file(char *argv, int argc);
void _close_file(FILE *_fd, char *argv);

FILE *_open_file(char *argv);
void _cpFile(FILE *_fp);
void _strtoken(void);
void _exe(void);
int _isdigit(int c);
void free_STACK(stack_t *head);
void _pint(stack_t **stack, unsigned int line_number);



#endif /* End of include guard */
