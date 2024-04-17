/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:54:45 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/17 19:38:56 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	//The value of the argument must be representable as an unsigned char or the value of E0F
	if (c == FT_EOF)
		return (0);
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	return (1);
}
