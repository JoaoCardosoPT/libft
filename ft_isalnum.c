int ft_isalnum(int d)
{
    if ((d <= 'A' && d >= 'Z') || (d <= 'a' && d >= 'a') || (d <= 0 && d >= 9))
        return (1);
    return (0);
}

