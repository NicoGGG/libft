/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 21:36:25 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 21:49:59 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((new->content = malloc(content_size)) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (content)
	{
		new->content = (void *)content;
		new->content_size = content_size;
	}
	else
	{
		free(new->content);
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
