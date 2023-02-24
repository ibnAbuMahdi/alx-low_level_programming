#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: the first int
 * @b: second int
 * Return: sum as int
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first int
 * @b: second int
 * Return: difference as int
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a with b
 * @a: first int
 * @b: second int
 * Return: the product as int
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first int
 * @b: second int
 * Return: the quotient as int
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the a modulo b
 * @a: first int
 * @b: second int
 * Return: the modulo
 */

int mod(int a, int b)
{
	return (a % b);
}
