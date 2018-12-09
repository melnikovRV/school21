/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabre-c <nsabre-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:05:40 by nsabre-c          #+#    #+#             */
/*   Updated: 2018/11/21 10:07:15 by nsabre-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int argc, char *argv[])
{
	int i;
	int min;

	while (argc > 1)
	{
		min = 0;
		i = 0;
		while (++i < argc)
			if (min == 0 || ft_strcmp(argv[i], argv[min]) < 0)
				min = i;
		while (*argv[min])
			ft_putchar(*argv[min]++);
		ft_putchar('\n');
		if (min != --argc)
			ft_swap(argv + min, argv + argc);
	}
	return (0);
}
