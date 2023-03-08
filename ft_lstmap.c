/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:59:44 by josmarqu          #+#    #+#             */
/*   Updated: 2023/03/08 20:03:21 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		res = ft_lstnew(f(lst->content));
		if (res == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		if (new == NULL)
			new = res;
		else
			ft_lstadd_back(&new, res);
		lst = lst->next;
	}
	return (new);
}
