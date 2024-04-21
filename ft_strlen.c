/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:07:46 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/21 19:36:05 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlen(const char *s)
{
	const char *end;
	end = s;
	while(*end)
		end++;
	return (end - s); 
}
