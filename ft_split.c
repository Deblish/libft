/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:00 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 18:58:46 by aapadill         ###   ########.fr       */
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
	char	*found_at;

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
		found_at = ft_strchr(aux, c);
		//word_end = found_at - 1;
		//words[i] = ft_substr(aux, word_end - aux, found_at - aux);
		//aux = found_at + 1;
		//i++;
	}
	words[i] = NULL;
	return (words);
}
