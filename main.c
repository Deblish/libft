/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:08:36 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/19 16:04:10 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main (void)
{
	int	i;
	char *arr;
	
	i = -1;
	while(i < 128)
	{
		printf("%c is %i\n",i, ft_isprint(i));
		i++;
	}

	printf("memset\n");
	//i = 0;
	//arr = (char *)malloc(9 * sizeof(char));	
	ft_memset(arr, 48, 3);
	arr[8] = '\0';
	printf("the size of the word is %zu\n", strlen(arr));
	printf("%s", arr);
	return (0);
}
