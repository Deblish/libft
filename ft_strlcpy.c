/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:23:42 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/22 13:53:49 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (!dstsize)
		return (0);
	while (dstsize - 1 && *src && *dst)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (srclen);
}
