/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:29:47 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 14:29:51 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the parameter string.
** Each character is passed by address to the function.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}
