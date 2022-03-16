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

	if (ld > 0)
		_putchar(ld + '0');	/*if ld is +*/
	else
		_putchar('0' + (ld * -1));	/*if ld is -*/

	return (-1 * ld);
}
