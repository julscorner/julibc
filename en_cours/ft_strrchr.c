/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:44:10 by jmurte            #+#    #+#             */
/*   Updated: 2017/12/10 03:15:48 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	chrc;
	int		len;

	chrc = (char)c;
	len = ft_strlen(str);
	if (chrc == '\0')
		return (str = str + len);
	len = len - 1;
	while (len > 0 || str[len] != chrc)
		len--;
	if (str[len] == chrc)
		return (str = str + len);
	if (len == 0 && str[len] != chrc)
		return (NULL);
}
