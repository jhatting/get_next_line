/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:55:00 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:55:06 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Input-output system calls in C | Create, Open, Close, Read, Write.
**we use a file descriptor obtained from the open system call, or we
**can use 0, 1, or 2, to refer to the standard input, standard output,
** or standard error.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
