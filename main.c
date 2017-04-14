#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char *mytest1;
	char *mytest2;
	char *mytest3;
	char *mytest4;
	char test1[] = "   bonjour    ";
	char test2[] = "S4LuT C4 v4 ?";
	char test3[] = "45regijgrioREGEG gergORWJH wRHWWHhgv";
	char test4[] = "";
	char c = 50;
	int len = 7;

	printf("\n -----------------MEMSET------------------- \n");

// EXERCICE MEMSET
	printf("\n-----TEST 1-----\n");
	mytest1 = strdup(test1);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest1, c, len), test1, c, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest1, c, len), test1, c, len, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 51;
	len = 12;
	mytest2 = strdup(test2);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest2, c, len), test2, c, len, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest2, c, len), test2, c, len, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 52;
	len = 0;
	mytest3 = strdup(test3);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest3, c, len), test3, c, len, mytest3);
	mytest3 = strdup(test3);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest3, c, len), test3, c, len, mytest3);

	printf("\n-----TEST 4-----\n");
	c = 53;
	len = 5;
	mytest4 = strdup(test4);
	printf("\n   memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest4, c, len), test4, c, len, mytest4);
	mytest4 = strdup(test4);
	printf("\nft_memset pointe sur : '%s' pour s = '%s', c = '%c' et len = '%d'. s devient '%s'\n-", (char *)memset(mytest4, c, len), test4, c, len, mytest4);

	printf("\n -----------------BZERO------------------- \n");

// EXERCICE BZERO

	printf("\n-----TEST 1-----\n");
	len = 6;
	mytest1 = strdup(test1);
	bzero(mytest1, len);
	printf("\n   bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test1, len, mytest1);
	mytest1 = strdup(test1);
	ft_bzero(mytest1, len);
	printf("\nft_bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test1, len, mytest1);

	printf("\n-----TEST 2-----\n");
	len = 12;
	mytest2 = strdup(test2);
	bzero(mytest2, len);
	printf("\n   bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test2, len, mytest2);
	mytest2 = strdup(test2);
	ft_bzero(mytest2, len);
	printf("\nft_bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test2, len, mytest2);

	printf("\n-----TEST 3-----\n");
	len = 0;
	mytest3 = strdup(test3);
	bzero(mytest3, len);
	printf("\n   bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test3, len, mytest3);
	mytest3 = strdup(test3);
	ft_bzero(mytest3, len);
	printf("\nft_bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test3, len, mytest3);

	printf("\n-----TEST 4-----\n");
	len = 5;
	mytest4 = strdup(test4);
	bzero(mytest1, len);
	printf("\n   bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test4, len, mytest4);
	mytest4 = strdup(test4);
	ft_bzero(mytest4, len);
	printf("\nft_bzero : pour s = '%s', et len = '%d'. s devient '%s'\n-", test4, len, mytest4);

	printf("\n -----------------MEMCPY------------------- \n");

	printf("\n-----TEST 1-----\n");
	len = 6;
	mytest1 = strdup(test1);
	printf("\n   memcpy pointe sur : '%s' pour dst = '%s', src = '%s' et len = '%d'. s devient '%s'\n-", (char *)memcpy(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_memcpy pointe sur : '%s' pour dst = '%s', src = '%s' et len = '%d'. s devient '%s'\n-", (char *)ft_memcpy(mytest1, test3, len), test1, test3, len, mytest1);	
	
	printf("\n-----TEST 2-----\n");
	len = 12;
	mytest2 = strdup(test2);
	printf("\n   memcpy pointe sur : '%s' pour dst = '%s', src = '%s' et len = '%d'. s devient '%s'\n-", (char *)memcpy(mytest2, test4, len), test2, test4, len, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_memcpy pointe sur : '%s' pour dst = '%s', src = '%s' et len = '%d'. s devient '%s'\n-", (char *)ft_memcpy(mytest2, test4, len), test2, test4, len, mytest2);

	printf("\n -----------------MEMCCPY------------------- \n");

	printf("\n-----TEST 1-----\n");
	len = 6;
	c = 50;
	mytest1 = strdup(test1);
	printf("\n   memccpy pointe sur : '%s' pour dst = '%s', src = '%s', c = 50, et len = '%d'. s devient '%s'\n-", (char *)memccpy(mytest1, test3, c, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_memccpy pointe sur : '%s' pour dst = '%s', src = '%s', c = 50, et len = '%d'. s devient '%s'\n-", (char *)ft_memccpy(mytest1, test3, c, len), test1, test3, len, mytest1);	
	
	printf("\n-----TEST 2-----\n");
	len = 12;
	c = 51;
	mytest2 = strdup(test2);
	printf("\n   memccpy pointe sur : '%s' pour dst = '%s', src = '%s', c = 51, et len = '%d'. s devient '%s'\n-", (char *)memccpy(mytest2, test4, c, len), test2, test4, len, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_memccpy pointe sur : '%s' pour dst = '%s', src = '%s', c = 51, et len = '%d'. s devient '%s'\n-", (char *)ft_memccpy(mytest2, test4, c, len), test2, test4, len, mytest2);

	printf("\n -----------------STRLCAT------------------- \n");

	len = 10;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	len = 0;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	len = 150;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	len = strlen(test3) + strlen(test1);
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	len = strlen(test3) + strlen(test1) + 1;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	len = strlen(test3) + strlen(test1) - 1;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	return (0);


}

