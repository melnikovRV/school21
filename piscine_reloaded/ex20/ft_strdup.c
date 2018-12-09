/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:08:51 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/21 10:15:37 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *i;

	i = (char *)malloc(sizeof(*i) * (ft_strlen(src) + 1));
	i = ft_strcpy(i, src);
	return (i);
}
