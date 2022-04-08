#include <stdio.h>
/**
 * main - entery point
 *
 * Description: print the lower and upper alphabet on the same line
 * Return: 0
 */
int main(void)
{

	int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);

putchar('\n');
	
return (0);
}
