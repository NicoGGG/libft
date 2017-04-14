#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

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

	printf("\n-----TEST 1-----\n");
	len = 10;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	printf("\n-----TEST 2-----\n");
	len = 0;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	printf("\n-----TEST 3-----\n");
	len = 150;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	printf("\n-----TEST 4-----\n");
	len = strlen(test3) + strlen(test1);
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	printf("\n-----TEST 5-----\n");
	len = strlen(test3) + strlen(test1) + 1;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);	

	printf("\n-----TEST 6-----\n");
	len = strlen(test3) + strlen(test1) - 1;
	mytest1 = strdup(test1);
	printf("\n   strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", strlcat(mytest1, test3, len), test1, test3, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strlcat retourne : '%lu' pour dst = '%s', src = '%s', et len = '%d'. s devient '%s'\n-", ft_strlcat(mytest1, test3, len), test1, test3, len, mytest1);

	printf("\n -----------------STRCHR------------------- \n");

	mytest1 = strdup(test1);
	mytest2 = strdup(test2);
	mytest3 = strdup(test3);
	mytest4 = strdup(test4);

	printf("\n-----TEST 1-----\n");
	c = 0;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strchr(mytest1, c), test1, c, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strchr(mytest1, c), test1, c, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 67;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strchr(mytest2, c), test2, c, mytest2);
	mytest1 = strdup(test1);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strchr(mytest2, c), test2, c, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 103;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strchr(mytest3, c), test3, c, mytest3);
	mytest1 = strdup(test1);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strchr(mytest3, c), test3, c, mytest3);

	printf("\n-----TEST 4-----\n");
	c = 100;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strchr(mytest4, c), test4, c, mytest4);
	mytest1 = strdup(test1);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strchr(mytest4, c), test4, c, mytest4);

	printf("\n -----------------STRRCHR------------------- \n");

	mytest1 = strdup(test1);
	mytest2 = strdup(test2);
	mytest3 = strdup(test3);
	mytest4 = strdup(test4);

	printf("\n-----TEST 1-----\n");
	c = 0;
	printf("\n   strrchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strrchr(mytest1, c), test1, c, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strrchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strrchr(mytest1, c), test1, c, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 67;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strrchr(mytest2, c), test2, c, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strrchr(mytest2, c), test2, c, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 103;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strrchr(mytest3, c), test3, c, mytest3);
	mytest3 = strdup(test3);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strrchr(mytest3, c), test3, c, mytest3);

	printf("\n-----TEST 4-----\n");
	c = 100;
	printf("\n   strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", strrchr(mytest4, c), test4, c, mytest4);
	mytest4 = strdup(test4);
	printf("\nft_strchr retourne : '%s' pour src = '%s', c = '%c'. s devient '%s'\n-", ft_strrchr(mytest4, c), test4, c, mytest4);

	printf("\n -----------------STRSTR------------------- \n");

	mytest1 = strdup(test1);
	mytest2 = strdup(test2);
	mytest3 = strdup(test3);
	mytest4 = strdup(test4);
	char sub1[] = "jou";
	char sub2[] = "S4LuT C4 v4 ?  ";
	char sub3[] = "rioR";
	char sub4[] = "test";

	printf("\n-----TEST 1-----\n");
	c = 0;
	printf("\n   strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", strstr(mytest1, sub1), test1, sub1, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", ft_strstr(mytest1, sub1), test1, sub1, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 67;
	printf("\n   strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", strstr(mytest2, sub2), test2, sub2, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", ft_strstr(mytest2, sub2), test2, sub2, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 103;
	printf("\n   strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", strstr(mytest3, sub3), test3, sub3, mytest3);
	mytest3 = strdup(test3);
	printf("\nft_strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", ft_strstr(mytest3, sub3), test3, sub3, mytest3);

	printf("\n-----TEST 4-----\n");
	c = 100;
	printf("\n   strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", strstr(mytest4, sub4), test4, sub4, mytest4);
	mytest4 = strdup(test4);
	printf("\nft_strstr retourne : '%s' pour src = '%s', sub = '%s'. s devient '%s'\n-", ft_strstr(mytest4, sub4), test4, sub4, mytest4);

	printf("\n -----------------STRNSTR------------------- \n");

	mytest1 = strdup(test1);
	mytest2 = strdup(test2);
	mytest3 = strdup(test3);
	mytest4 = strdup(test4);

	printf("\n-----TEST 1-----\n");
	c = 0;
	len = 10;
	printf("\n   strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", strnstr(mytest1, sub1, len), test1, sub1, len, mytest1);
	mytest1 = strdup(test1);
	printf("\nft_strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", ft_strnstr(mytest1, sub1, len), test1, sub1, len, mytest1);

	printf("\n-----TEST 2-----\n");
	c = 67;
	len = 10;
	printf("\n   strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", strnstr(mytest2, sub2, len), test2, sub2, len, mytest2);
	mytest2 = strdup(test2);
	printf("\nft_strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", ft_strnstr(mytest2, sub2, len), test2, sub2, len, mytest2);

	printf("\n-----TEST 3-----\n");
	c = 103;
	len = 10;
	printf("\n   strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", strnstr(mytest3, sub3, len), test3, sub3, len, mytest3);
	mytest3 = strdup(test3);
	printf("\nft_strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", ft_strnstr(mytest3, sub3, len), test3, sub3, len, mytest3);

	printf("\n-----TEST 4-----\n");
	c = 100;
	len = 10;
	printf("\n   strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", strnstr(mytest4, sub4, len), test4, sub4, len, mytest4);
	mytest4 = strdup(test4);
	printf("\nft_strnstr retourne : '%s' pour src = '%s', sub = '%s' et len = %d. s devient '%s'\n-", ft_strnstr(mytest4, sub4, len), test4, sub4, len, mytest4);


	return (0);


}

