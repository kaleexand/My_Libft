/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:04:23 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/08 16:47:11 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t n;

	n = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[n] != '\0' && (n + i + 1) < size)
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i != size)
		dst[i + n] = '\0';
	return (ft_strlen(src) + i);
}
