#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - addition of two nbrs
 * @a: first number
 * @b: second number
 * Return: SUm of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: first nb
 * @b: second nb
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first nb
 * @b: second nb
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first nb
 * @b: second nb
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division
 * @a: first nb
 * @b: second nb
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
