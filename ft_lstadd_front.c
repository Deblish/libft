/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:01:29 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/30 13:44:01 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief
** Adds the node ’new’ at the beginning of the list
**
** @param
** lst: The address of a pointer to the first link of 
** a list.
** new: The address of a pointer to the node to be
** added to the list.
**
** @return
*/


#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
