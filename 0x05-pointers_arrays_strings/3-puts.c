/**
 * _puts - write the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned and error is there returned
 */

int _puts(char *str)
{
	return (write(1, &c, 1));
}
