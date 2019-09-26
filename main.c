/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 08:40:45 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 10:02:19 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int			main(int ac, char **av)
{
	char	*file;
	char	*line;
	int		fd;
	int		flag;

	if (ac == 2)
		file = av[1];
	else
		file = "MyFile.txt";
	fd = open(file, O_RDONLY);
	line = malloc(sizeof(char) * BUFF_SIZE);
	flag = 1;
	while (flag == 1)
	{
		flag = get_next_line(fd, &line);
		printf("%s\n", line);
	}
	return (0);
}
