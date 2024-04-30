/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:48:14 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/30 14:19:56 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief
** Counts the number of nodes in a list
**
** @param
** lst: The beginning of the list.
** 
** @return
** The length of the list
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (*lst->next != NULL)
	{
		i++;
		lst = *lst->next;
	}
	return (i);
}
