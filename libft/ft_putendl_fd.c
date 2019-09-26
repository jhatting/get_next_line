/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:56:04 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:56:09 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**inserts a newline and doesnt occupy memory.
**File descriptor is integer that uniquely
**identifies an open file of the process
*/

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
