/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:07:31 by shat              #+#    #+#             */
/*   Updated: 2019/10/17 13:00:53 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**allocates memory, takes value position and length (ft_strsub)
*/

char			*mallocsizelensub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) * (len + 1))))
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

/*
**builds a string by concatenating the elements in a set of data &adding a separator btwn them
**(ft_strjoin)
*/

char			*fd_joinbuff(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if ((s1 != NULL && s2 != NULL) && \
	(str = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)))))
	{
		i = 0;
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

/*
**LINE EVALAUTATION:
***-Reads file line by line up to \n.
***-Finds the length of a line.
***-Creates a new substring allocates memory
*/

static int		evaluatesentence(char **s, char **line)
{
	int			len;
	char		*temp;

	len = 0;
	//while string len is not a newline and not a NULL increment
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	//if string len is a newline then the following:
	if ((*s)[len] == '\n')
	{
		//allocates memory, takes value position and length (ft_strsub)
		*line = mallocsizelensub(*s, 0, len);
		//ft_strdup duplicates the strings address includes the length and the null term
		temp = ft_strdup(&((*s)[len + 1]));
		//frees the strings memory
		free(*s);
		*s = temp;
		//if string zero equals NULL then delete,free & set to NULL
		if ((*s)[0] == '\0')
			ft_strdel(s);
	}
	//if the *line equals the duplicated string delete,free & set to NULL
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	//return 1 means the line has been read.
	return (1);
}

/*
**OUTPUTS:
***-Has the line been read -RETURN (1)
***-If any error(nothing in file) -RETURN (-1)
***-If the entire file has been Read -RETURN (0)
*/

static int		output(char **s, char **line, int ret, int fd)
{
	//if the return is less than 0 return -1
	if (ret < 0)
		return (-1);
	//if the return is equal to zero or the string FD equals NULL, return 0
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	else
		// or else go back to the function evaluate function to get a return value
		return (evaluatesentence(&s[fd], line));
}

/*
**READS:
***-Reads the file
***-Reads and gives it a buff size
***-Reading line by line, memory allocation & freeing it
*/

int				get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*s[FD_SIZE];
	char		buff[BUFF_SIZE + 1];
	char		*temp;
	//if file descriptor is less than 0 or the line is equal to NULL RETURN -1
	if (fd < 0 || line == NULL)
		return (-1);
	//while return read fd, buff, BUFF_SIZE is greater than zero. return to the function output.
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		//buff return is NULL
		buff[ret] = '\0';
		//if string file descriptor is NULL
		if (s[fd] == NULL)
			//string fd is ft_strdup duplicating the strings address includes the length
			s[fd] = ft_strdup(buff);
		else
		{
			//temporary is concatenating string FD & buff freeing it
			temp = fd_joinbuff(s[fd], buff);
			free(s[fd]);
			//string fd is tempory file stored space
			s[fd] = temp;
		}
		// searches the occurance of newline in the string file descriptor and breaks the loop
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	return (output(s, line, ret, fd));
}
