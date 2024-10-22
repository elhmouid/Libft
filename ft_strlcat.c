/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:34:25 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/22 23:32:48 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize){
    if (src == NULL || dst == NULL)
        return (0);
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while (dst[i] && i < dstsize)
        i++;
    while (src[j] && (i + j < dstsize - 1))
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = ('\0');
    return (i + ft_strlen(dst));
}