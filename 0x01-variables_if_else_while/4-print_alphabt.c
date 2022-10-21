#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 /**
  * main - Entry Point
  *
  * Description: 'Return alphabets both except e and q'
  *
  * Return: Always 0 (success)
  */

int main(void)

{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
