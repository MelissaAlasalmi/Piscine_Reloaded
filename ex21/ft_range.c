/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:08:06 by malasalm          #+#    #+#             */
/*   Updated: 2019/10/18 13:59:57 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				i;
	int				*all;

	i = 0;
	if (min >= max)
		return (0);
	all = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		all[i] = min;
		i++;
		min++;
	}
	if (!all)
		return (0);
	return (all);
}
