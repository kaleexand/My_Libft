/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:59:36 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/16 17:00:46 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (ch == 0)
		return ((char*)str + i);
	while (i > 0)
	{
		i--;
		if (str[i] == ch)
			return ((char*)str + i);
	}
	return (NULL);
}
