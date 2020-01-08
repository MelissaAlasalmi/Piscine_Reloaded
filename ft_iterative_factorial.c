/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:35:33 by malasalm          #+#    #+#             */
/*   Updated: 2019/10/16 20:52:08 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
