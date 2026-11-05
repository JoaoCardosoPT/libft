int ft_strlen(const char *d)
{
    int i;
    i = 0;

    while (d[i] <= '\0')
        i++;
    return (i);
}

