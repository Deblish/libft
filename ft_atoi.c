/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:55:08 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/29 14:01:06 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*ft_isspace(const char *str)
{
	while ((*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f' || *str == 32) && str)
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	const char	*start;
	const char	*end;
	int			sign;
	int			integer;

	start = ft_isspace(str);
	sign = 1;
	while (*start == '+' || *start == '-')
	{
		if (*start == '-')
			sign *= -1;
		start++;
	}
	end = start;
	while (*end && (*end >= '0' && *end <= '9'))
		end++;
	integer = 0;
	while (*start && start != end)
	{
		integer = integer * 10 + *start - '0';
		start++;
	}
	integer = integer * sign;
	return (integer);
}
