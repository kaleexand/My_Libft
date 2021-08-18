/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalexand <kalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:16:26 by kalexand          #+#    #+#             */
/*   Updated: 2020/11/21 16:01:29 by kalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			words_count(char const *s, char c)
{
	size_t words;

	words = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			words++;
		s++;
	}
	return (words);
}

size_t			word_len(const char *s, char c)
{
	const char *tmp = s;

	while (*tmp && *tmp != c)
		tmp++;
	return (tmp - s);
}

static void		*free_split(char **split)
{
	size_t i;

	i = 0;
	while (split[i])
		free(split[i++]);
	if (split)
		free(split);
	split = NULL;
	return (*split);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	w_len;
	size_t	i;

	if (!s || !(split = malloc(sizeof(char*) * (words_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			w_len = word_len(s, c);
			split[i] = (char *)malloc(sizeof(char) * (w_len + 1));
			if (!split[i])
				return (free_split(split));
			ft_memcpy(split[i], s, w_len);
			split[i][w_len] = '\0';
			s += (w_len - 1);
			i++;
		}
		s++;
	}
	split[i] = NULL;
	return (split);
}
