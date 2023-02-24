#ifndef _3_CALC_H
#define _3_CALC_H

/**
 * struct op - Struct op
 * @op: the operator
 * @f: the function associated with the operator
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int add(int a, int b);

int sub(int, int);

int mul(int, int);

int div(int, int);

int mod(int, int);

int (*get_op_func(char *s))(int, int);
#endif /* _3_CALC_H */
