/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:55:25 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 13:28:34 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int		n;
	int		j;
	char	*tmp;
	int		i;

	n = 1;
	i = 1;
	while (n < argc - 1)
	{
		j = n + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[n], argv[j]) > 0)
			{
				tmp = argv[n];
				argv[n] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		n++;
	}
	while (i++ < argc)
		ft_putstr(argv[i - 1]);
	return (0);
}
