/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:26:44 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/23 15:28:26 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(long int n, int fd)
{
	if (n > 9)
		print(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		print((long int)n * (-1), fd);
	}
	else
		print((long int)n, fd);
}
