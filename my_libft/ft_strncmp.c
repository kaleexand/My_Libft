/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:22:01 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/10 14:50:21 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str2[i] != '\0' && i < num)
	{
		if ((unsigned char)str[i] != (unsigned char)str2[i])
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i != num)
		return ((unsigned char)str[i] - (unsigned char)str2[i]);
	return (0);
}
