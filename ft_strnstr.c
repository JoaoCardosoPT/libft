char *ft_strnstr(const char *haystack, const char *needle, int len)
{
    int i;
	int j;
    
	i = 0;
	if (needle[0] == '\0')
        return ((char *) haystack);

    while(haystack[i] && i < len)
    {
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
