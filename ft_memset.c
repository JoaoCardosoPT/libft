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

