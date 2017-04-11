/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:45:48 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/11 15:58:34 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*source;
	char	*destination;
	int		i;

	source = (char *)src;
	destination = (char *)dst;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		if (destination[i] == c)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
