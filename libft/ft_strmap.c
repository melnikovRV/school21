/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:00 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/06 19:44:06 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*result;

	if (s == NULL)
		return (NULL);
	if (!(str = (char*)malloc(ft_strlen(s))))
		return (NULL);
	result = str;
	while (*s != 0)
	{
		*str = f(*s);
		str++;
		s++;
	}
	*str = 0;
	return (result);
}
