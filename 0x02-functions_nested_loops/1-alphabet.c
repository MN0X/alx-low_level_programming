#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Loop variable */
	char letter;

	/* Loop through lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Print each letter */
		putchar(letter);
	}
	putchar('\n'); /* Print new line at the end */
	return (0);
}
