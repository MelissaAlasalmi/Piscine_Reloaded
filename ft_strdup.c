/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:52:17 by malasalm          #+#    #+#             */
/*   Updated: 2019/10/17 12:31:58 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*nstr;

	i = 0;
	while (src[i] != '\0')
		i++;
	nstr = (char *)malloc((i + 1) * sizeof(char));
	if (!nstr)
		return (0);
	nstr = ft_strcpy(nstr, src);
	return (nstr);
}
