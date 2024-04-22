/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:23:57 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/22 16:40:29 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;
	size_t i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	if (!dstsize || dstlen >= dstsize)
		return (dstlen + srclen);
	while (i < dstsize - 1 && *src)
		dst[i++] = *src++;
	dst[i] = 0;
	return (dstlen + srclen);
}
