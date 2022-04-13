i#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum the sum of a and b
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}
/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 *
 * Return: division of a by b.
 */
int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}
/**
 * op_mod - modulus of b in a
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
