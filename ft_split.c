/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:00 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/26 08:48:21 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t		q_words;
	size_t	i;
	const char	*aux;
	char	*word_end;
	char	**words;
	char	*stop;

	q_words = 0;
	aux = s;
	while (*aux)
	{
		while (*aux == c)
			aux++;
		if (*aux != 0)
			q_words++;
		while (*aux && *aux != c)
			aux++;
	}
	words = malloc((q_words + 1) * sizeof(char *));
	if(!words)
		return (NULL);
	aux = s;
	i = 0;
	while (i < q_words)
	{
		while (*aux == c)
			aux++;
		stop = ft_strchr(aux, c);
		if (!stop)
			stop = ft_strchr(aux, 0);
		words[i] = ft_substr(aux, 0, stop - aux);
		if (!words[i])
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
		aux = stop;
		if (*stop != 0)
			aux++;
		i++;
	}
	words[i] = NULL;
	return (words);
}
