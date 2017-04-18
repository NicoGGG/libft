/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:08:26 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/18 16:55:17 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	copy = lst;
	head = lst;
	while (copy)
	{
		if ((copy = malloc(sizeof(t_list))) == NULL)
			return (NULL);
		if ((copy->content = malloc(lst->content_size)) == NULL)
		{
			free(copy);
			return (NULL);
		}
		copy = f(lst);
		copy->next = lst->next;
		lst = lst->next;
		copy = lst;
	}
	return (head);
}
