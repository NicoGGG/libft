/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:34:44 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/11 15:53:59 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destination;
	char	tmp[n];
	int		i;

	source = (char *)src;
	destination = (char *)dst;
	i = 0;
	while (i < n)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destination[i] = tmp[i];
		i++;
	}
	return (dst);
}
