#include "libft.h"

char *ft_substr(char *a, unsigned int start, int len)
{
    int i;
    char *str;

    i = 0;
    if (!a)
        return (NULL);

    if (start > ft_strlen(a))
        return(ft_strdup(""));

    if (len > ft_strlen(a + start))
        len = ft_strlen(a + start);

    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);

    while(i < len)
    {
        str[i] = a[start + i];
        i++;
    }
    return (str);
}
