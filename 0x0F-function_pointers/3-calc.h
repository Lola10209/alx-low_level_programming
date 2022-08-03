#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - Struct op
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
} op_t;
int (*f)(int a, int b);

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
