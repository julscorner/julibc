/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 07:23:17 by julie             #+#    #+#             */
/*   Updated: 2017/12/10 03:24:36 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdrl(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = 0;
}
