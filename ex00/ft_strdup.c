char *ft_strdup(char *src)
{
	int	size;
	char	*dest;
	char	*psrc = src;
	char	*pdest = dest;

	size = 0;
	while (*psrc != '\0')
	{
		psrc++;
		size++;
	}
	dest = (char *) malloc(size + 1);
	while (*src != '\0')
		*(pdest++) = *(src++);
	*(pdest) = '\0';
	return dest;
}
