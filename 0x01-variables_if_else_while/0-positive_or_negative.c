#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -Entry point
 * @n: holds value each time code is ran
 *
 * Description: this program generate a random number each time the program is ran
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	  printf("%d is positive\n",n);
	else if (n==0)
	  printf("%d is zero\n",n);
	else if(n<0)
	  printf("%d is negative\n",n);
	return (0);
}
