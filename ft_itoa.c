/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 08:23:37 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/29 08:53:08 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_exp(int base, int exp)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

static int	ft_digit_counter(int j)
{
	int	i;

	i = 1;
	while (j >= 10)
	{
		j /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		a;
	int		b;
	char	digit_char;
	int		sign;
	char	*str;
	int		i;
	int		j;

	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	digits = ft_digit_counter(n);
	str = malloc((digits + sign + 1) * sizeof(char));
	i = digits;
	if (sign)
		str[0] = '-';
	j = 0;
	while (i--)
	{
		b = (n % (ft_exp(10, i)));
		a = (n - b);
		digit_char = (a / (ft_exp(10, i))) + '0';
		//write(1, &digit_char, 1);
		str[j + sign] = digit_char;
		n = b;
		j++;
	}
	return (str);
}
