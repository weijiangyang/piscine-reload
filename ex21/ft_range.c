/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:41:36 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 07:40:11 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;

	n = 0;
	if (min >= max)
		return (NULL);
	array = malloc ((max - min) * sizeof (int));
	if (!array)
		return (NULL);
	while (min < max)
	{
		array[n] = min;
		min++;
		n++;
	}
	return (array);
}
