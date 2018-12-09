/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:48:25 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/27 14:48:25 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptrsrc;
	char	*ptrdst;

	ptrsrc = (char *)src;
	ptrdst = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(ptrdst + i) = *(ptrsrc + i);
		if (*(ptrsrc + i) == c)
			return (ptrdst + i + 1);
		i++;
	}
	return (NULL);
}
