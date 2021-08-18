/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:04:24 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/10 19:44:39 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if (*little == '\0' || big == little)
		return ((char*)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		n = 0;
		while (big[i] == little[n] && big[i] != '\0' &&
			little[n] != '\0' && i < len)
		{
			i++;
			n++;
		}
		if (little[n] == '\0' && i - n < len)
			return ((char*)big + (i - n));
		i = i - n;
		i++;
	}
	return (NULL);
}
