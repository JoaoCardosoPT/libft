#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *res;

    res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));     
	if (!res)
		return (NULL);

	while (s1[i])
	{
		res[j] = s1[i];
		j++;
		i++
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		j++;
		i++
	}
	res[j] = 0;
	return (res);
}
