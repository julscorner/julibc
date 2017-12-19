/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 02:33:24 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:31:53 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen_base_ten(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	n_cpy;
	unsigned int	i;

	len = intlen_base_ten(n);
	n_cpy = n;
	i = 0;
	if (n < 0)
	{
		n_cpy = - n;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	 if (n == 0)
    	{
        	str[i++] = '0';
        	str[i] = '\0';
        	return (str);
    	}
	len = len - 1;
	str[len--] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[len--] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
