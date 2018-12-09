/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:35 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/06 19:46:58 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char		*new_str;
	size_t		i;

	if (!(new_str = (char*)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(new_str + i) = 0;
		i++;
	}
	return (new_str);
}
