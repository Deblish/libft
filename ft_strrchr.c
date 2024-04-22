/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:23:51 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/22 19:46:26 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	const char *last;
	last = NULL;
    while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
    }
	if (!c)
        return ((char *)s);
	return ((char *)last);
}
