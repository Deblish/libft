/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:40:59 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/29 12:46:58 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief
** Outputs the string 's' to the given file descriptor.
**
** @param
** s: The string to output
** fd: The file descriptor on which to write
**
** @return
*/

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	while(*s)
		write(fd, s++, 1);
}
