int int_lenght(int number)
{
	int length;

	length = 0;
	if (number == 0)
		return (1);

	if (number < 0)
		number = -number;

	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char *ft_itoa(int n)
{
	int len;
	char *result;
	long num;

	num = n;
	len = int_lenght(n);
	result = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
}
