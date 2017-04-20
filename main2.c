
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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
	ac = 1;
	if (ac == 1)
		printf("\n");
	char mytest1[] = "bonjour ca\tva";
	char mytest2[] = "   salut    lol\n ";
	char mytest3[] = "";
	char mytest4[] = " \twegiwegjWEGbWEGIEJGWegwkgejk e1651 121  231   231651616b648613";

	char **tab1;
	char **tab2;

	tab1 = ft_tabdup(av);
	tab2 = NULL;

	printf("-------------------MEMDEL-----------------\n");
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

	printf("-------------------STRSPLIT-----------------\n");
	
	char *split = " cb\t\n";
	int	i = 4;
	while (i >= 0)
	{
		ft_printtab(ft_strsplit(mytest1, split[i]));
		ft_printtab(ft_strsplit(mytest2, split[i]));
		ft_printtab(ft_strsplit(mytest3, split[i]));
		ft_printtab(ft_strsplit(mytest4, split[i]));
		i--;
	}

	printf("-------------------STRTRIM-----------------\n");
	printf("TEST 1 : '%s'\n", mytest1);
	printf("TEST 2 : '%s'\n", mytest2);
	printf("TEST 3 : '%s'\n", mytest3);
	printf("TEST 4 : '%s'\n", mytest4);
	printf("TRIM TEST 1 : '%s'\n", (ft_strtrim(mytest1)));
	printf("TRIM TEST 2 : '%s'\n", (ft_strtrim(mytest2)));
	printf("TRIM TEST 3 : '%s'\n", (ft_strtrim(mytest3)));
	printf("TRIM TEST 4 : '%s'\n", (ft_strtrim(mytest4)));

	printf("-------------------STRJOIN-----------------\n");

	printf("TEST 1 : '%s'\n", mytest1);
	printf("TEST 2 : '%s'\n", mytest2);
	printf("TEST 3 : '%s'\n", mytest3);
	printf("TEST 4 : '%s'\n", mytest4);
	printf("JOIN TEST 1 ET 2 : '%s'\n", (ft_strjoin(mytest1, mytest2)));
	printf("JOIN TEST 3 ET 4 : '%s'\n", (ft_strjoin(mytest3, mytest4)));
	printf("JOIN TEST 1 ET 3 : '%s'\n", (ft_strjoin(mytest1, mytest3)));
	printf("JOIN TEST 4 ET 2 : '%s'\n", (ft_strjoin(mytest4, mytest2)));

	printf("-------------------STRSUB-----------------\n");

	





	return (0);
}

