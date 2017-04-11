/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:50:50 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/11 15:58:07 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}