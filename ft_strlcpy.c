/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:46:16 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/22 22:32:03 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize){
    if (dst == NULL || src == NULL)
        return (0);
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (src[j]){
        j++;
    }
    if (dstsize == 0){
        return (j);
    }
    while (src[i] && i < dstsize - 1){
        dst[i] = src[i];
        i++;
    }
    dst[i] = ('\0');
    return (j);
}

int main()
{
    char dst[9];
    printf("the lenght 0f src : %zu\n", ft_strlcpy(dst, "elhmouidmohamed", sizeof(dst)));
    printf("dest : %s", dst);
}