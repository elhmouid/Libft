#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>

int     ft_atoi(const char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlen(const char *s);

#endif
