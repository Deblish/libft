/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:23:42 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/22 19:26:32 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	while (dstsize - 1 && *src)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (srclen);
}
