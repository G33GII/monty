#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
	struct stack_s *prev;
	struct stack_s *next;
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
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


typedef struct _op_
{
	int _lx;
	char *_str;
} st_data;


extern st_data ex_dt;

void _ismonty_file(char *argv, int argc);
FILE *_open_file(char *argv);
void _getline(FILE *_fp);
void _close_file(FILE *_fd, char *argv);


#endif /* End of include guard */
