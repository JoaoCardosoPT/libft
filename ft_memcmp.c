int ft_memcmp(const void *s1, const void *s2, int n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char) *s1;
    str2 = (unsigned char) *s2;

    while(i < n) 
    {
        if  ((unsigned char)str1[i] != (unsigned char)str2[i])
            return ((unsigned char)str1[i] != (unsigned char)str2[i]);
    }
    return (0);
}

