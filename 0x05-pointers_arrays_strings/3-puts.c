/**
 * _putchar - writes the characther c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned and error is there returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
