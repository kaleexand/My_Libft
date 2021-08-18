/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:02:01 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/10 20:00:04 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char const ch, char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	n = ft_strlen(s1) - 1;
	while ((ft_search(s1[n], set) == 1))
	{
		if (n > 0)
			n--;
		else
			break ;
	}
	n++;
	while ((ft_search(s1[i], set) == 1))
		i++;
	if (i == ft_strlen(s1))
		return (ft_substr("", 0, 1));
	return (ft_substr(s1, i, n - i));
}
