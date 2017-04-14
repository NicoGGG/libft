#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char *mytest1;
	char *mytest2;
	char *mytest3;
	char test1[] = "   bonjour    ";
	char test2[] = "S4LuT C4 v4 ?";
	char test3[] = "";
	char c = 50;
	int len = 7;

	printf("\n -----------------MEMSET------------------- \n");

// EXERCICE MEMSET
	printf("\n-----TEST 1-----\n");
	mytest1 = strdup(test1);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest1, c, len), test1, c, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest1, c, len), test1, c, len, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 51;
	len = 12
	mytest2 = strdup(test2);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest2, c, len), test2, c, len, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest2, c, len), test2, c, len, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 52;
	len = 0
	mytest3 = strdup(test3);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest3, c, len), test3, c, len, mytest3);
	mytest3 = strdup(test3);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%d' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest3, c, len), test3, c, len, mytest3);

	printf("\n -----------------BZERO------------------- \n");

// EXERCICE BZERO
	char mytest4[] = "bonjour";
	char mytest5[] = "salut ca va ?";
	char mytest6[] = "";
	char test4[] = "bonjour";
	char test5[] = "salut ca va ?";
	char test6[] = "";
	bzero(test4, 6);
	bzero(test5, 0);
	bzero(test6, 20);
	ft_bzero(mytest4, 6);
	ft_bzero(mytest5, 0);
	ft_bzero(mytest6, 20);

	printf("\n-----TEST 4-----\n");
	printf("\nbzero affiche : '%s' pour s = bonjour, et len = 6\n", test4);
	printf("\nft_bzero affiche : '%s' pour les memes arguments\n", mytest4);
	printf("\n-----TEST 5-----\n");
	printf("\nbzero affiche : '%s' pour s = salut ca va, et len = 0\n", test5);
	printf("\nft_bzero affiche : '%s' pour les memes arguments\n", mytest5);
	printf("\n-----TEST 6-----\n");
	printf("\nbzero affiche : '%s' pour s = NULL, et len = 20\n", test6);
	printf("\nft_bzero affiche : '%s' pour les memes arguments\n", mytest6);
	printf("\n -----------------MEMCPY------------------- \n");

	char mytest7[] = "bonjour";
	char mytest8[] = "salut ca va ?";
	char mytest9[] = "";
	char mytest10[] = "coucou";
	char mytest11[] = "j'apprecie les fruits au sirop";
	char mytest12[] = "hey";
	char test7[] = "bonjour";
	char test8[] = "salut ca va ?";
	char test9[] = "";
	char test10[] = "coucou";
	char test11[] = "j'apprecie les fruits au sirop";
	char test12[] = "hey";

	printf("\n-----TEST 7-----\n");
	printf("\nmemcpy pointe sur : '%s' pour dest = bonjour, src = coucou et len = 6\n", (char *)memcpy(test7, test10, 6));
	printf("\nbonjour devient : '%s' pour dest = bonjour, src = coucou et len = 6\n", test7);
	printf("\nft_memcpy pointe sur : '%s' pour les memes arguments\n", (char *)ft_memcpy(mytest7, mytest10, 6));
	printf("\nbonjour devient : '%s' pour les mêmes arguments\n", mytest7);
	printf("\n-----TEST 8-----\n");
	printf("\nmemcpy pointe sur : '%s' pour dest = salut ca va ?, src = j'apprecie les fruits au sirop et len = 12\n", (char *)memcpy(test8, test11, 12));
	printf("\nsalut ca va devient : '%s' pour les mêmes arguments\n", test8);
	printf("\nft_memcpy pointe sur : '%s' pour les memes arguments\n", (char *)ft_memcpy(mytest8, mytest11, 12));
	printf("\nsalut ca va devient : '%s' pour les mêmes arguments\n", mytest8);
	printf("\n-----TEST 9-----\n");
	printf("\nmemcpy pointe sur : '%s' pour dest = hey, src = '' et len = 4\n", (char *)memcpy(test12, test9, 4));
	printf("\n'' devient : '%s' pour les mêmes arguments\n", test12);
	printf("\nft_memcpy pointe sur : '%s' pour dest = hey, src = '' et len = 4\n", (char *)ft_memcpy(mytest12, mytest9, 4));	printf("\n'' devient : '%s' pour les mêmes arguments\n", mytest12);

	char mytest13[] = "bonjour";
	char mytest14[] = "salut ca va ?";
	char mytest15[] = "";
	char mytest16[] = "coucou";
	char mytest17[] = "j'apprecie les fruits au sirop";
	char mytest18[] = "hey";
	char test13[] = "bonjour";
	char test14[] = "salut ca va ?";
	char test15[] = "";
	char test16[] = "coucou";
	char test17[] = "j'apprecie les fruits au sirop";
	char test18[] = "hey";

	printf("\n-----TEST 10-----\n");
	printf("\nmemccpy pointe sur : '%s' pour dest = bonjour, src = coucou, c = u len = 6\n", (char *)memccpy(test13, test16, 117, 6));
	printf("\nbonjour devient : '%s' pour les mêmes arguments\n", test13);
	printf("\n-----TEST 11-----\n");
	printf("\nft_memccpy pointe sur : '%s' pour dest = bonjour, src = coucou, c = u len = 6\n", (char *)ft_memccpy(mytest13, mytest16, 117, 6));
	printf("\nbonjour devient : '%s' pour les mêmes arguments\n", mytest13);
	printf("\n-----TEST 12-----\n");
	printf("\nmemccpy pointe sur : '%s' pour dest = salut ca va ?, src = j'apprecie les fruits au sirop, c = u len = 20\n", (char *)memccpy(test14, test17, 117, 12));
	printf("\nsalut ca va ? devient : '%s' pour les mêmes arguments\n", test14);
	printf("\n-----TEST 13-----\n");
	printf("\nft_memccpy pointe sur : '%s' pour dest = salut ca va ?, src = j'apprecie les fruits au sirop, c = u len = 20\n", (char *)ft_memccpy(mytest14, mytest17, 117, 12));
	printf("\nsalut ca va ? devient : '%s' pour les mêmes arguments\n", mytest14);
	return (0);
}

