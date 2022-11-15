/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemontalbetti <antoinemontalbetti@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:52:37 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/15 19:45:34 by antoinemont      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*newnode;

	newnode = NULL;
	while (lst)
	{
		begin = ft_lstnew(f(lst->content));
		if (!begin)
		{
			ft_lstdelone(begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, newnode);
		lst = lst->next;
	}
	return (begin);
}