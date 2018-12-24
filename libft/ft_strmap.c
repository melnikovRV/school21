/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:23:25 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/13 17:23:25 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*result;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	result = str;
	while (*s != 0)
	{
		*str = f(*s);
		str++;
		s++;
	}
	*str = '\0';
	return (result);
}
