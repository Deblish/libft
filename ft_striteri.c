/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:06:34 by aapadill          #+#    #+#             */
/*   Updated: 2024/04/29 12:17:25 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief
** Applies the function ’f’ on each character of the string passed as
** argument, passing its index as first argument. Each character is passed
** by address to ’f’ to be modified if necessary.
**
** @param
** s: The string on which to iterate.
** f: The function to apply to each character.
**
** @return
*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if(!s || !f)
		return (NULL);

	i = 0;
	while (s[i])
		s[i] = f(i, s[i++]);
}
