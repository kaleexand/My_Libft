/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:51:29 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/19 16:08:36 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t			n;
	unsigned char	*i;
	unsigned char	*j;

	i = (unsigned char *)buf1;
	j = (unsigned char *)buf2;
	n = 0;
	while (n < count)
	{
		if (i[n] != j[n])
			return (i[n] - j[n]);
		n++;
	}
	return (0);
}
