int is_digit(char c);
int is_sign(char c);
int is_space(char c);

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (is_space(s[i]))
		i++;

	while (is_sign(s[i]))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (is_digit(s[i]))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return result * sign;
}

/**
 * is_digit - checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_sign - checks if a character is a sign (+ or -)
 * @c: The character to check
 *
 * Return: 1 if the character is a sign, 0 otherwise
 */
int is_sign(char c)
{
	return (c == '+' || c == '-');
}

/**
 * is_space - checks if a character is a whitespace character
 * @c: The character to check
 *
 * Return: 1 if the character is a whitespace character, 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r');
}
