/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:49:23 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:20 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	//The value of the argument must be representable as an unsigned char or the value of E0F
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
