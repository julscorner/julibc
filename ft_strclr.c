/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:08:21 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:24:50 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int ilenstr;
	int i;

	i = 0;
	if (!s)
		return ;
	ilenstr = ft_strlen(s);
	if (ilenstr == 0)
		return ;
	ilenstr = ilenstr - 1;
	while (i < ilenstr)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
}
