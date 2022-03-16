#include "main.h"
/**
 * print_last_digit - display last digit
 * @num: number to be checked
 *
 * Description:a function that prints
 * the last digit of a number.
 * Return: last digit
 */
int print_last_digit(int num)
{
	int ld = (num % 10);	/*ld: last digit*/

	if (num > 0 || num == 0)
	{
		_putchar(ld + '0');	 /*if ld is +*/
		return (ld);
	}
	else
	{
		_putchar((ld * (-1)) + '0');	/*if ld is -*/
		return ((-1) * ld);
	}
}
