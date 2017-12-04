/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmurte <jmurte@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:08:52 by jmurte            #+#    #+#             */
/*   Updated: 2017/11/27 15:08:56 by jmurte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// space is the first printable character && the 127th is no-print (DEL)

int	ft_isprint(int c)
{
	return (c >= ' ' && c < 127);
}
