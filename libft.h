/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:29:33 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/23 02:35:09 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);



#endif
