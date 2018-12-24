/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:23:34 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/13 17:23:35 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
