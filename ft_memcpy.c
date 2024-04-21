/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:50:47 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/21 23:22:38 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *d;
	const char *s;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}
