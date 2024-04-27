/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:57:54 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/26 15:54:49 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if(!s)
		return (NULL);
	while (*s && *s != (char)c)
		s++;
	if (!*s && c != 0)
		return (NULL);
	return ((char *)s);
}
