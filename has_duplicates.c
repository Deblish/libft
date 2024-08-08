/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:40:12 by aapadill          #+#    #+#             */
/*   Updated: 2024/08/06 17:51:22 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_duplicates(int i, char **argv)
{
	int	j;

	j = i - 1;
	while (i && j)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (1);
		j--;
	}
	return (0);
}