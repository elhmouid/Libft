/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:17:15 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/23 16:36:02 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		ichara;
	size_t	ra9m;

	i = 0;
	ichara = 1;
	ra9m = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ichara *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ra9m = ra9m * 10 + (str[i] - 48);
		if (ra9m > LONG_MAX && ichara == 1)
			return (-1);
		if (ra9m > LONG_MAX && ichara == -1)
			return (0);
		i++;
	}
	return ra9m * ichara;
}

// int main(void)
// {
//     printf("%d\n", ft_atoi("  1234"));
//     printf("%d\n", ft_atoi("  -1234"));
//     printf("%d\n", ft_atoi("  +1234"));
// }