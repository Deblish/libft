/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:49:23 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/17 13:57:18 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char *str)
{
	#The value of the argument must be representable as an unsigned char or the value of E0F
	while(*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++; 
	}
}
