#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char tmp[1000];
	char test1[] = "bonjour";
	strcpy(tmp, test1);
	printf("\nmemset affiche : %s pour b = bonjour, c = 50 et len = 6\n", memset(tmp, 50, 6));
	strcpy(tmp, test1);
	printf("\nft_memset affiche : %s pour les memes arguments\n", ft_memset(tmp, 50, 6));
	printf("\n-----------------\n");
	strcpy(tmp, test1);

	return (0);
}

