/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hmo <moel-hmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:37:40 by moel-hmo          #+#    #+#             */
/*   Updated: 2024/10/23 22:44:10 by moel-hmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb = (long )n;
	
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + 48, fd);
}

int main()
{
	int fd = open("file", O_CREAT | O_RDWR | O_APPEND, 0644);
	printf("fd : %d\n", fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(123, fd);
}