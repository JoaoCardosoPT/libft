int ft_strlcat(char *dst, const char *src, int len)
{
    int src_len;
    int dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
a
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

