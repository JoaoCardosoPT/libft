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

