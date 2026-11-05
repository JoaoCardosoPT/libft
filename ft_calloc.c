#include "libft.h"

void *ft_calloc(int count, int size)
{
	int i
	unsigned char *tmp;
	
	tmp = malloc(size * count);
	if (!tmp)
		return(NULL); 
	memset(tmp, 0, size * count);
	return(tmp);
}
