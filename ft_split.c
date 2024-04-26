/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:00 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/26 14:49:10 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != 0)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static int	splitter(char **words, char const *s, char c, size_t q_words)
{
	size_t	i;
	char	*stop;

	i = 0;
	//stop = NULL;
	while (i < q_words)
	{
		while (*s == c)
			s++;
		stop = ft_strchr(s, c);
		if (!stop)
			stop = ft_strchr(s, 0); //strchr might be wrong
		words[i] = ft_substr(s, 0, stop - s);
		if (!words[i])
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (1);
		}
		s = stop + (*stop != 0);
		i++;
	}
	words[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	q_words;
	char	**words;

	//if (!s)
	//	return NULL;
	q_words = word_counter(s, c);
	words = malloc((q_words + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	if (splitter(words, s, c, q_words))
		return (NULL);
	return (words);
}
