/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:07:16 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/23 13:22:35 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 2;
	while ((long)n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		else
			n++;
	}
	return (0);
}
/*int	main()
{
	int	result;

	result = ft_sqrt(-22);
	printf("the result is %d", result);
	return (0);
}*/
