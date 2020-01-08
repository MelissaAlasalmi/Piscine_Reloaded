/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:06:13 by malasalm          #+#    #+#             */
/*   Updated: 2019/10/17 20:09:07 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_display(char *str)
{
	int		fd;
	int		r;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	while ((r = read(fd, buf, BUF_SIZE)))
	{
		write(1, buf, r);
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_display(argv[1]);
	return (0);
}
