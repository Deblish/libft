/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:08:36 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/19 10:01:03 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main (void)
{
	int	i;
	i = -1;
	while(i < 128)
	{
		printf("%c is %i\n",i, ft_isprint(i));
		i++;
	}

	printf("strlen\n");
	printf("the size of the word is %zu\n", ft_strlen("abc"));
	
	printf("memset\n");
	i = 0;
	int size = 1;
	int arr[size];
	while(i < size)
		arr[i++] = 0;
	int c = 0;
	i = 0;
	memset(arr, c, sizeof(arr));
	while (i < (int)sizeof(arr))
	{
		printf("%i", arr[i]);
		i++;
	}
	return (0);
}
