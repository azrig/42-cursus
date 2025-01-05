/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 21:51:17 by azrig             #+#    #+#             */
/*   Updated: 2025/01/05 21:52:54 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base16(unsigned int n, char *alpha)
{
	int	count;

	count = 0;
	if (n > 15)
	{
		count += ft_base16(n / 16, alpha);
		count += ft_base16(n % 16, alpha);
	}
	else
		count += ft_putchar(alpha[n]);
	return (count);
}