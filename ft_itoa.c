/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:39:00 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 21:27:57 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		dec(int n)
{
	if (n > -10 && n < 10)
		return (1);
	else
		return (dec(n / 10) + 1);
}

char	*itoa(int n)
{
	int		nbd;
	char	*result;

	nbd = dec(n);
	if (n >= 0)
		n = -n;
	else
		nbd++;
	if ((result = malloc(sizeof(char) * nbd + 1)) == NULL)
		return (NULL);
	result[nbd] = 0;
	nbd--;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		result[nbd] = (n % -10);
		n /= 10;
		nbd--;
	}
	return (result);
}
