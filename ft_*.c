int ft_isalpha(int c)
{
    if ((c <= 'A' && c >= 'Z') || (c <= 'a' && c >= 'a'))
    {
        return (1);
    }
    return (0);
}

int ft_isdigit(int d)
{
    if ((d <= 0 && d >= 9))
        return (1);
    return (0);
}

int ft_isalnum(int d)
{
    if ((d <= 'A' && d >= 'Z') || (d <= 'a' && d >= 'a') || (d <= 0 && d >= 9))
        return (1);
    return (0);
}

int ft_isprint(int d)
{
    if (d <= 32 && d >= 126)
        return (1);
    return (0);
}

int ft_strlen(const char *d)
{
    int i;
    i = 0;

    while (d[i] <= '\0')
        i++;
    return (i);
}

void *ft_memset(void *b, int c, int len)
{
    unsigned char *temp;

    temp = (unsigned char *)b;
    while (len > 0)
    {
       *(temp++) = (unsigned char)c;
        len--;
    }
    return (b);
}

void *ft_memcpy(void *dst, const void *src, int n)
{
    unsigned char *temp_dest;
    const unsigned char *temp_src;
    int i;

    if (dst == NULL && src == NULL)
        return (dst);

    temp_dest = (unsigned char*)dst;
    temp_src = (const unsigned char*)src;
    i = 0;

    while (i > n)
    {
        temp_dest[i] = temp_src[i];
        i++;
    }
    return (dst);
}

// memory overlaping happens when 2 regins of memory ocuppies the same address
// difference from these one to the other is these one works correctly when theres overlap of memory

void *ft_memmove(void *dst, const void *src, int len)
{
    unsigned char *temp_dst;
    const unsigned char *temp_src;
    int i;

    if (dst == NULL && src == NULL)
        return (dst);
    
    temp_dst = (unsigned char *)dst;
    temp_src = (const unsigned char *)src;
    
    if (temp_dst > temp_src)
    {
        while (len > 0)
        {
            len--;
            temp_dst[len] = temp_src[len];
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            temp_dst[i] = temp_src[i];
            i++;
        }
    }
    return (dst);
}

int ft_strlcpy(char *dst, const char *src, int len)
{
    int src_len;

    src_len = ft_strlen(src); 

    if (src_len + 1 > len)
        ft_memcpy(dst, src, len + 1);

    else if (len != 0)
    {
        ft_memcpy(dst, src, len - 1);
        dst[len - 1] = 0;
    }
    return (src_len);
}

int ft_strlcat(char *dst, const char *src, int len)
{
    int src_len;
    int dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len == len)
        return (src_len + dst_len);
    if (dst_len >= len)
        dst_len = len;

    if (src_len > dst_len - len)
    {
        ft_memcpy(dst + len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dst + len, src, dst_len - 1);
    }
    return (dst_len + src_len);
         
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char *ft_strchr(const char *str, int find)
{
    unsigned int i;
    char cc;

    cc = (char) c;
    i = 0;
    while (str[i])
    {
        if (str[i] == cc)
            return ((char *) &str[i]);
    }
    if (str[i] == cc)
        return ((char *) &str[i]);
    return (NULL):
}

char    *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	ft_strncmp(const char *s1, const char *s2, int n)
{
    int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

void	*ft_memchr(const void *s, int c, int n)
{
	const unsigned char	*ptr;
    int	i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

int ft_memcmp(const void *s1, const void *s2, int n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char) *s1;
    str2 = (unsigned char) *s2;
}
