/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:31:44 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 12:05:18 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	//size_t	s1_len;
	//size_t	s2_len;
	char	*str;

	//s1_len = ft_strlen(s1);
	//s2_len = ft_strlen(s2);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!str)
		return (NULL);
	while(*s1)
		*str++ = *s1++;
	while(*s2)
		*str++ = *s2++;
	*str = 0;
	return (str);
}
