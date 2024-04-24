/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:55:29 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:45 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *aux;
	char	*sub;

	if (ft_strlen(s) <= start)
		return 
	sub = malloc(max_writable + 1);
	if (!sub)
		return (NULL);
	aux = s + start;
	while (*aux && len--)
		*sub++ = *aux++;
	*sub = 0;
		
		
}
