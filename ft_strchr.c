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

