#include "main.h"
/**
 * rev_string - reverses strings of characters
 * @s: strings to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	int len;

	len = 0;
	/*To get the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}
	/*To swap the strings in reverse directions*/
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp;

		temp = s[i];	/*To hold current char temporarily*/
		s[i] = s[j];	/*Swaping the char last to first for i<j*/
		s[j] = temp;	/*collect previous char*/
	}
}
