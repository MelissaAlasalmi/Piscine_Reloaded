/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:25:00 by malasalm          #+#    #+#             */
/*   Updated: 2019/10/17 15:02:22 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_middleman(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_print_params(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*swap;

	x = 1;
	y = 2;
	if (argc == 0 || argc == 1)
		return (0);
	while (argv[x] != '\0')
	{
		while (argv[y] != '\0')
		{
			if (ft_strcmp(argv[x], argv[y]) > 0)
			{
				swap = argv[x];
				argv[x] = argv[y];
				argv[y] = swap;
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	ft_middleman(argc, argv);
	return (0);
}
