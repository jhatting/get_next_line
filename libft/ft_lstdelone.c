/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:47:03 by shat              #+#    #+#             */
/*   Updated: 2019/09/26 12:47:07 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The function ft_lstdelone() takes as a parameter a link's pointer address
**and frees the memory of the link's content using the function del given
**as a parameter, then frees the link's memory using free(3). The memory
**of next must not be freed under any circumstance. Finally, the pointer
**to the link that was just freed must be set to NULL
**(quite similar to the function ft_memdel)
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || del == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
