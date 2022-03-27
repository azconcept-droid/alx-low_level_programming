nclude "main.h"
/**
 * leet - encodes a string into 1337
 * @c: String encoded
 *
 * Return: string that is encoded
 */
char *leet(char *c)
{
	char *c_ptr = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c_ptr)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c_ptr == key[i] || *c_ptr == key[i] + 32)
			{
				*c_ptr = 48 + value[i];
			}
		}
		c++;
	}

	return (c_ptr);

}
