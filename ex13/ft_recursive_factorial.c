/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:48:49 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 12:40:45 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}
