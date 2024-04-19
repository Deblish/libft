/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:24:29 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/19 12:37:39 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i; //from 0 to MAX?
	unsigned char *p; //pointer

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*p = c;
		i++;
		p++;
	}
	return ((void *)b);
}
