/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 17:22:14 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/12/13 17:22:15 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int is_negative;

	i = 0;
	num = 0;
	is_negative = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = 10 * num + (str[i] - '0');
		i++;
	}
	if (is_negative == 1)
		return (-num);
	return (num);
}
