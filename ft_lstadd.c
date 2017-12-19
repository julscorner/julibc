/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:06:45 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/18 16:06:50 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst == NULL)
		return ;
	else if (*alst == NULL)
		*alst = new;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
