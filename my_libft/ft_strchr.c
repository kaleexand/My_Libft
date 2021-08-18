/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:59:08 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/07 19:59:21 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *s;

	s = (char*)str;
	while (*s != '\0')
	{
		if (*s == (char)ch)
			return (s);
		s++;
	}
	if (ch == '\0')
		return (s);
	return (NULL);
}
