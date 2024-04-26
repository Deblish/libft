/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:08:36 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/26 14:34:18 by aapadill         ###   ########.fr       */
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
	//char *arr = "tring";
	//char *arr2 = "String";
	char **words;
	char *str = NULL;
	//char *str2 = "Esto es un string con espacios";
	//ft_memset(arr, 1, 3);
	//printf("the size of the word is %zu\n", ft_strlen(arr));
	//printf("%s\n", arr);
	//ft_bzero(arr, 5);
	//printf("%s", arr);
	//printf("%s", ft_strtrim(arr, arr2));
	words = ft_split(str, ' ');
	int i = 0;
	while (words)
		printf("%p\n", words[i++]);
	return (0);
}
