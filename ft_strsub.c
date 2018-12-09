/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:52:24 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/06 19:48:03 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!(str = (char*)malloc(len)))
		return (NULL);
	i = 0;
	while (start != 0)
	{
		s++;
		start--;
	}
	while (len != 0)
	{
		*(str + i) = *s;
		i++;
		s++;
		len--;
	}
	return (str);
}
