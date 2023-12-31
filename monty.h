#ifndef MONTY_H
#define MONTY_H

/**
 * _GNU_SOURCE - Ensures getline extensions are available
 * Placed before the <stdio.h>
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
 * @next: points to the next element of the stack (or queue)
 * @prev: points to the previous element of the stack (or queue)
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
 * @k: the opcode
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
 * struct monty_ - New data type for many members
 * @LN: Line number
 * @STR: getline string
 * @FP: Head of the data structure
 * @AGV: Head of the data structure
 * @FUNC: function name after strtok
 * @VALUE: Integer value after strtok
 * @STACKH: Head pointer of the data structure
 * @STACKT: TAIL pointer of the data structure
 * @PUQU: Determines whether list is stack or queue
 * Description:
 */
typedef struct monty_
{
	int PUQU;
	FILE *FP;
	char *AGV;
	char *STR;
	char *FUNC;
	char *VALUE;
	stack_t *STACKH;
	stack_t *STACKT;
	unsigned int LN;

} _MONTY;


extern _MONTY Em;


void _pchar(stack_t **stack, unsigned int line_number);
void _queue(stack_t **stack, unsigned int line_number);
void _stack(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);



void (*_FS(void))(stack_t **stack, unsigned int line_number);
void _ismonty_file(char **argv, int argc);
void _close_file(FILE *_fd, char *argv);
void free_STACK(stack_t *head);
FILE *_open_file(char *argv);
void _EXITFAILURE(void);
void _cpFile(FILE *_fp);
stack_t *_MEMALLOC(void);
int _LENGTHLIST(void);
int _isblnk(char *_s);
void _strtoken(void);
int _isdigit(int c);
int _isINT(char *s);
void _exe(void);



#endif /* End of include GUARD */
