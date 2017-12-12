/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:44:59 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:15:06 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	char	chrc;
	int		chr_null;

	chr_null = 0;
	if (c == 0)
	{
		chr_null = ft_strlen(str);
		str = str + chr_null;
		return (str);
	}
	chrc = (char)c;
	while (*str != '\0' || *str != chrc)
		str++;
	if (*str == chrc)
		return (str);
	else
		return (NULL);
}
