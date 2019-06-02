
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*j;

	if (*alst)
	{
		while ((*alst) && alst)
		{
			j = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = j;
		}
	}
	(*alst) = NULL;
}
