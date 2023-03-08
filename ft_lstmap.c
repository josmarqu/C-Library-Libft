/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmarqu <josmarqu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:59:44 by josmarqu          #+#    #+#             */
/*   Updated: 2023/03/08 14:06:13 by josmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}
