/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:30:55 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/19 14:19:46 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*dst;

	len = ft_len(n);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (n < 0)
	{
		dst[0] = '-';
		sign = 1;
	}
	else
		sign = 0;
	while (len-- > sign)
	{
		if (n < 0)
			dst[len] = '0' + n % 10 * (-1);
		if (n >= 0)
			dst[len] = '0' + n % 10;
		n /= 10;
	}
	return (dst);
}
