/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samhatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:53:03 by samhatti          #+#    #+#             */
/*   Updated: 2019/09/10 12:54:32 by samhatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**used to check if the argument contains any
**white-space characters.
**There are many types of whitespace characters
**‘ ‘ - space (isstrwhitespace)
**‘\t’ - horizontal tab (isstrwhitespace)
**‘\n’- newline (isstrwhitespace)
**‘\v’- vertical tab (ft_isotherwhitespace)
**‘\f’- Feed (ft_isotherwhitespace)
**‘\r’- Carriage return (ft_isotherwhitespace)
*/

int		ft_iswhitespace(char c)
{
	return (ft_isstrwhitespace(c) || ft_isotherwhitespace(c));
}
