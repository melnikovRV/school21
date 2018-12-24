/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:22:45 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/13 17:22:46 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrsrc;
	unsigned char	*ptrdst;

	ptrsrc = (unsigned char *)src;
	ptrdst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*(ptrdst + i) = *(ptrsrc + i);
		i++;
	}
	return (dst);
}
