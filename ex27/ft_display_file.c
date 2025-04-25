/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:13:36 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 09:06:11 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
	{
		write (fd, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	if (argc < 2)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	if (argc < 2 || argc > 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (0);
}
