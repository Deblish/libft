/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:16:25 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/23 20:54:25 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_aux;
	const char	*needle_aux;
	size_t	n;

	if (!*needle)
		return (char *)haystack;
	while (*haystack && len)
	{
		haystack_aux = haystack;
		needle_aux = needle;
		n = len;
		while (*haystack_aux == *needle_aux && *needle_aux && n)
		{
			haystack_aux++;
			needle_aux++;
			n--;
		}
		if (!*needle_aux)
			return (char *)haystack;
		haystack++;
		len--;
	}
	return ((void *)0);
}
