/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:43:37 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 12:37:28 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	result;

	result = 1;
	n = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (n <= nb)
	{
		result *= n;
		n++;
	}
	return (result);
}
