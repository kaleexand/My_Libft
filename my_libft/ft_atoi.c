/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:10:50 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/20 10:46:35 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\f') ||
			(str[i] == '\v') || (str[i] == ' ') || (str[i] == '\r'))
		i++;
	sign = ((str[i] == '-') ? -1 : 1);
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = 10 * n + (str[i] - '0');
		if ((n > 2147483647 && sign == 1) ||
			(n < -2147483648 && sign == -1))
			return ((sign == 1) ? -1 : 0);
		i++;
	}
	return (n * sign);
}
