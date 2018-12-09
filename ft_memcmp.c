/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:48:35 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/27 14:48:36 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptrs1;
	char	*ptrs2;

	ptrs1 = (char *)s1;
	ptrs2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)*(ptrs1 + i) != (unsigned char)*(ptrs2 + i))
			return ((unsigned char)*(ptrs1 + i) - (unsigned char)*(ptrs2 + i));
		i++;
	}
	return (0);
}
