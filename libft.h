#ifndef FT_LIB_FT_H 
#define FT_LIB_FT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int ft_isalpha(int c);
int ft_isdigit(int d);
int ft_isalnum(int d);
int ft_isprint(int d);
int ft_strlen(char *d);

char *ft_strdup(const char *s1);

void *ft_calloc(int count, int size);
void ft_putchar_fd(char c, int fd);
void *ft_memset(void *b, int c, int len);

#endif 
