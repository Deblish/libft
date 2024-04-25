/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:00 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 16:38:30 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t		q_words;
	size_t	i;
	const char	*aux;
	char	*word_end;
	char	word;
	char	*words;

	q_words = 0;
	aux = s;
	while (ft_strchr(aux, c))
	{
		aux = ft_strchr(aux, c) + 1;
		q_words++;
	}
	words = malloc(q_words * sizeof(char *));
	aux = s;
	
	while (ft_strchr(aux, c))
	{
		word_end = ft_strchr(aux, c) - 1;
		word = ft_stubstr(aux, word_end - aux, ft_strchr(aux, c) - aux);
		aux = ft_strchr(aux, c) + 1;
		words++;
	}
}
