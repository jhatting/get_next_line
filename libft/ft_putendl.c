/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:55:43 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:55:47 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**inserts a newline and doesnt occupy memory/flush the stream.
*/

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
