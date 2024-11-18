/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:17:57 by azrig             #+#    #+#             */
/*   Updated: 2024/11/18 14:17:57 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*str;

	i = ft_nblen(n);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
		{
			str[i] = '0' - (n % 10);
			i--;
		}
		else
		{
			str[i] = '0' + (n % 10);
			i--;
		}
		n = n / 10;
	}
	return (str);
}