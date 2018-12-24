/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:23:43 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/13 17:23:43 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	if (!(str = (char*)malloc(len + 1)))
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
	*(str + i) = '\0';
	return (str);
}
