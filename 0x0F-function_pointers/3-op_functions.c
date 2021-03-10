#include "3-calc.h"
/**
* op_add - Entry point
* @a: number
* @b: number
*
* Description: Add 2 numbers
* Return: Resault of add
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Entry point
* @a: number
* @b: number
*
* Description: Substract 2 numbers
* Return: Resault of substraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Entry point
* @a: number
* @b: number
*
* Description: Multiply 2 numbers
* Return: Resault of multiply
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Entry point
* @a: number
* @b: number
*
* Description: Divide 2 numbers
* Return: Resault of divide
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - Entry point
* @a: number
* @b: number
*
* Description: Calculate the rest of a divide of 2 number
* Return: Resault of calc
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
