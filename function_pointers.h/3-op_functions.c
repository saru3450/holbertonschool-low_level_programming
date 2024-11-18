#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - Returns the sum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Sum of the two integers a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Difference between the two integers a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Product of the two integers a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (divisor).
 *
 * Return: Result of dividing the integer a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (divisor).
 *
 * Return: Remainder of dividing the integer a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
