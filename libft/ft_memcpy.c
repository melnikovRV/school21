/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:48:40 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/27 14:48:40 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
