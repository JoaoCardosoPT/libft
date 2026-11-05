int ft_isalpha(int c)
{
    if ((c <= 'A' && c >= 'Z') || (c <= 'a' && c >= 'a'))
    {
        return (1);
    }
    return (0);
}

