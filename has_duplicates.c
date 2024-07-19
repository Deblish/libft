/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:09:43 by aapadill          #+#    #+#             */
/*   Updated: 2024/07/19 16:25:18 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_duplicates(int i, char **argv)
{
	int j;
	int max;

	j = i - 1;
	while (i && j)
	{
		max = ft_strlen(argv[i]) + ft_strlen(argv[j]);
		if (!ft_strncmp(argv[i], argv[j], max))
			return (1);
		j--;
	}
	return (0);
}
