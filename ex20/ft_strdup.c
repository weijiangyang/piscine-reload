/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:18:07 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/24 07:39:00 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*copied;
	int		i;

	i = 0;
	copied = malloc (ft_strlen(src) * sizeof(char) + 1);
	if (!copied)
		return (NULL);
	while (src[i])
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}
