#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	delete_link(void *content, size_t size)
{
	if (content && size)
		free(content);
}

void	ft_putstrlink(t_list *elem)
{
	int i;
	char *tmp;

	tmp = (char*)elem->content;
	i = 0;
	while (tmp[i])
	{
		write(1, &tmp[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

t_list	*make_c(t_list *elem)
{
	char	*tmp;
	tmp = elem->content;
	tmp[0] = 'C';
	return (elem);
}

t_list	*buildlist(char *av1, char *av2, char *av3, char *av4, char *av5)
{
	t_list	*list;

	char    *data1 = ft_strdup(av1);
	char    *data2 = ft_strdup(av2);
	char    *data3 = ft_strdup(av3);
	char    *data4 = ft_strdup(av4);
	char    *data5 = ft_strdup(av5);
	size_t  size1 = sizeof(char) * strlen(data1) + 1;
	size_t  size2 = sizeof(char) * strlen(data2) + 1;
	size_t  size3 = sizeof(char) * strlen(data3) + 1;
	size_t  size4 = sizeof(char) * strlen(data4) + 1;
	size_t  size5 = sizeof(char) * strlen(data5) + 1;

	list = NULL;

	ft_lstadd(&list, ft_lstnew(data1, sizeof(char) * size1));
	ft_lstadd(&list, ft_lstnew(data2, sizeof(char) * size2));
	ft_lstadd(&list, ft_lstnew(data3, sizeof(char) * size3));
	ft_lstadd(&list, ft_lstnew(data4, sizeof(char) * size4));
	ft_lstadd(&list, ft_lstnew(data5, sizeof(char) * size5));

	return (list);
}

int		main(int ac, char **av)
{
	if (ac != 6)
	{
		printf("ENTREZ 5 ARGS \n");
		return (0);
	}

	char	*data1 = ft_strdup(av[1]);
	char	*data2 = ft_strdup(av[2]);
	char	*data3 = ft_strdup(av[3]);
	char	*data4 = ft_strdup(av[4]);
	char	*data5 = ft_strdup(av[5]);
	size_t	size1 = (sizeof(char) * strlen(data1) + 1);
	size_t  size2 = sizeof(char) * strlen(data2) + 1;
	size_t  size3 = sizeof(char) * strlen(data3) + 1;
	size_t  size4 = sizeof(char) * strlen(data4) + 1;
	size_t  size5 = sizeof(char) * strlen(data5) + 1;
	t_list	*list;
	void	(*del)(void *, size_t);

	del = &delete_link;
	list = NULL;

	ft_lstadd(&list, ft_lstnew(data1, sizeof(char) * size1));
	ft_lstadd(&list, ft_lstnew(data2, sizeof(char) * size2));
	ft_lstadd(&list, ft_lstnew(data3, sizeof(char) * size3));
	ft_lstadd(&list, ft_lstnew(data4, sizeof(char) * size4));
	ft_lstadd(&list, ft_lstnew(data5, sizeof(char) * size5));

	print_list(list);
	
	ft_lstdelone(&list->next, del);

	printf("FREE LINK 2...\n");
	print_list(list);

	list = NULL;
	list = buildlist(av[1], av[2], av[3], av[4], av[5]);
	printf("REINIT LIST...\n");
	print_list(list);

	printf("FREE ENTIRE LIST...\n");
	ft_lstdel(&list, del);
	print_list(list);

	printf("REINIT LIST...\n");
	list =	buildlist(av[1], av[2], av[3], av[4], av[5]);

	printf("PRINT LIST WITH FT_PUTSTR...\n");
	void	(*fp)(t_list *elem);
	fp = &ft_putstrlink;
	ft_lstiter(list, fp);

	printf("REINIT LIST...\n");
    list =  buildlist(av[1], av[2], av[3], av[4], av[5]);

	t_list *copylist;
	t_list *(*fc)(t_list *elem);

	printf("LIST AFTER FUNCTION MAKE_C...\n");
	fc = &make_c;
	copylist = ft_lstmap(list, fc);
	print_list(copylist);

	return (0);
}
