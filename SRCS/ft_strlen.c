/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 23:01:39 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/03 23:52:09 by julie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	if (s[0] == 0)
		return (0);
	while (s[len])
	{
		len++;
	}
	return (len);
}
