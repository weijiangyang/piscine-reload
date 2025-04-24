/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:24:47 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/23 13:27:35 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

/*int	main()
{
	char *str;
	int	n;

	str = "hello , les amis!";
	n = ft_strlen(str);
	printf("la taille du string est %d", n);
	return (0);
}*/
