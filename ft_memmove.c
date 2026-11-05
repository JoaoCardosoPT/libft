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

