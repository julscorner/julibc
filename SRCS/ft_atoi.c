/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 02:12:10 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/04 02:13:08 by julie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"


int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (sign * res);
}
