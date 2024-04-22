/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:07:06 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/22 08:58:32 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp_dst;
	const char *temp_src;
	const char *aux;
	int overlap;
	size_t i;

	temp_dst = (char *)dst + len - 1;
	temp_src = (const char *)src + len - 1;
	aux = (const char *)src;
	overlap = 0;
	i = len;

	while(i--)
	{
		if (aux == dst)
			overlap = 1;
		else
			aux++;
	}

	if (overlap)
		while(len--)
			*temp_dst-- = *temp_src--;
	else
		ft_memcpy(dst, src, len);
	return dst;
}
