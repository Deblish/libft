/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:04:20 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/23 21:30:30 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char	*dest;
	char	*result;

	len = ft_strlen(s1);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return ((void *)0);
	result = dest;
	while (*s1)
		*dest++ = *s1++;
	*dest = 0;
	return (result);
}
