/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:00 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 17:04:34 by aapadill         ###   ########.fr       */
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
	while (ft_strchr(aux, c))
	{
		aux = ft_strchr(aux, c) + 1;
		q_words++;
	}
	words = malloc((q_words + 1) * sizeof(char *));
	aux = s;
	i = 0;
	while (ft_strchr(aux, c))
	{
		found_at = ft_strchr(aux, c);
		word_end = found_at - 1;
		words[i] = ft_substr(aux, word_end - aux, found_at - aux);
		aux = found_at + 1;
		i++;
	}
	words[i] = NULL;
	return (words);
}
