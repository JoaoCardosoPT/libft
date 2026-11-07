#include "libft.h"

static int count_words(char const *s, char c)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (s1[i])
	{
		while (s[i] && s[i])
			i++;
		if (s[i])
			count++;
	}
}

char **ft_split(char const *s, char c)
{
	char **array;
	int words;
	int i;
	int j;

	if (!s)
		return (NULL);

	words = count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	while(s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[j] = ft_substr(s, start, i - start);
		j++;
	}
	array[j] = NULL;
	return(array)
}
