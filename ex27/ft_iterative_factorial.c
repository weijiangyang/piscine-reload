/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:06:46 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 08:08:50 by weiyang          ###   ########.fr       */
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
