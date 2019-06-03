
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	*first;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	first = f(lst);
	current = first;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (!(current->next))
		{
			free(current->next);
			return (NULL);
		}
		current = current->next;
	}
	return (first);
}
