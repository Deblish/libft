/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:08:36 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/25 11:24:29 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main (void)
{
	//int	i;
	//char *arr;
	
	//i = -1;
	//while(i < 128)
	//{
		//printf("%c is %i\n",i, ft_isprint(i));
		//i++;
	//}

	//printf("memset\n");
	char arr[] = "ThisIsAString"; 
	//ft_memset(arr, 1, 3);
	//printf("the size of the word is %zu\n", ft_strlen(arr));
	//printf("%s\n", arr);
	//ft_bzero(arr, 5);
	//printf("%s", arr);
	printf("%s", ft_substr(arr, 3, 13));
	return (0);
}
