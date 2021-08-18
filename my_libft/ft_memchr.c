/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:04:13 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/19 13:41:04 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*j;
	size_t			n1;

	n1 = 0;
	j = ((unsigned char *)arr);
	while (n1 < n && j[n1] != (unsigned char)c)
		n1++;
	if (n1 == n)
		return (NULL);
	return (j + n1);
}
