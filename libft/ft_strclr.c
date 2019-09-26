/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:26:37 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:26:41 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Clears a string by assigning '\0' to all the characters
**of parameter string.
*/

void	ft_strclr(char *s)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		*s = '\0';
		s++;
	}
}
