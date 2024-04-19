/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:07:46 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/18 22:29:40 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//should I redefine size_t in libft.h?
size_t ft_strlen(const char *s)
{
	size_t	len;
	len = 0;
	while(*s)
	{
		len++;
		s++;
	}
	return (len); 
}
