/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:30:44 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/30 14:35:48 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @description
** Returns the last node of the list
**
** @param
** lst: The beginning of the list
**
** @return
** Last node of the lis 
*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst != NULL)
		lst = lst->next;
	return (lst);
}
