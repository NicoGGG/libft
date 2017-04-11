/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:52:09 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/11 15:33:27 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	int				i;
	char			*dst;

	i = 0;
	ch = (unsigned char)c;
	dst = b;
	while (i < len)
	{
		dst[i] = ch;
		i++;
	}
	return (b);
}
