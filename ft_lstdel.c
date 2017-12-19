/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:56:51 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/18 15:58:20 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;

	if (alst == NULL)
		return ;
	current = *alst;
	while (current)
	{
		(*del)(current->content, current->content_size);
		free(current);
		current = current->next;
	}
	*alst = NULL;
}
