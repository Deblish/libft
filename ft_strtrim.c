/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:01:31 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 14:18:39 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char const	*aux;

	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	aux = set;
	while (*start == *aux)
	{
		start++;
		aux++;
	}
	aux = set;
	while (*end == *aux)
	{
		end--;
		aux++;
	}
	if (start > end)
		return (ft_strdup(""));
	return (ft_substr(s1, start - s1, end - start + 1));
}
