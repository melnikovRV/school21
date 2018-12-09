/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:57:00 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/22 07:20:32 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int rs;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	rs = 1;
	while (i <= nb)
	{
		rs *= i;
		i++;
	}
	return (rs);
}