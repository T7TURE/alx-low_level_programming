#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sutracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: (b -a)
 */
int op_sub(int a, int b)
{
	return (b - a);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1 number
 * @b: other number
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: (a / b)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder from dividing two numbers
 * @a: number 1
 * @b: number 2
 * Return: remainder from dividing the two
 */
int op_mod(int a, int b)
{
	return (a % b);
}


