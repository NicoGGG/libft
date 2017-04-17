#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int		checkarg(char **av)
{
	return 1;
}

char	**ft_tabdup(char **tab)
{
	char	**tabdup;
	int		i;

	i = 0;
	while (tab[i])
		i++;
	tabdup = malloc(sizeof(char *) * i);
	tabdup[i] = NULL;
	while (--i >= 0)
	{
		tabdup[i] = strdup(tab[i]);
	}
	return (tabdup);
}

void	ft_printtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
}

int		main(int ac, char **av)
{
	char *mytest1;
	char *mytest2;
	char *mytest3;
	char *mytest4;
	char *mytest5;

	char **tab1;
	char **tab2;

//	tab1 = ft_tabdup(av);
	tab2 = NULL;

/*	printf("-------------------MEMDEL-----------------\n");
	ft_printtab(tab1);
	printf("DEVIENT APRES MEMDEL\n");
	ft_memdel((void **)tab1);
	ft_printtab(tab1);
	ft_memdel((void **)tab2);

	printf("-------------------STRDEL-----------------\n");
	tab1 = ft_tabdup(av);
	ft_printtab(tab1);
	printf("DEVIENT APRES STRDEL\n");
	ft_strdel(tab1);
	ft_printtab(tab1);
	ft_strdel(tab2);
*/
	printf("-------------------STRSPLIT-----------------\n");
	mytest1 = strdup(av[1]);
	mytest2 = strdup(av[2]);
	mytest3 = strdup(av[3]);
	mytest4 = strdup(av[4]);
	mytest5 = strdup(av[5]);
	char a = *av[6];
	char b = *av[7];
	char c = *av[8];
	char d = *av[9];
	char e = *av[10];


	ft_printtab(ft_strsplit(mytest1, a));
	ft_printtab(ft_strsplit(mytest2, b));
	ft_printtab(ft_strsplit(mytest3, c));
	ft_printtab(ft_strsplit(mytest4, d));
	ft_printtab(ft_strsplit(mytest5, e));

	ft_printtab(ft_strsplit(test, t));
	return (0);

}

