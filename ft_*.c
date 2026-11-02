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

int ft_strlen(char *d)
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
    unsigned char *temp_src;
    
    if (dst == (void *)0 && src == (void *)0)
        return (dst);

    temp_dest = (unsigned char*)dst;
    temp_src = (unsigned char*)src;

    while (n > 0)
    {
        *(temp_dest++) = *(temp_src);
        n--;
    }
    return (dst);
}

// memory overlaping happens when 2 regins of memory ocuppies the same address
void *ft_memmove(void *dst, const void *src, int len)
{
    char *temp_src;
    char *temp_dst;
}
