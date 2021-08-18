/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:36:54 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/10 19:44:39 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)buf)[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
