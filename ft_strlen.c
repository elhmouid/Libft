/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:07:18 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/21 22:43:10 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

int main(){
    printf("%zu\n", ft_strlen("haah\n"));
}