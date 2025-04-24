/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:38:08 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/23 13:31:03 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
