/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:56:08 by azrig             #+#    #+#             */
/*   Updated: 2025/01/05 21:53:17 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char format)
{
	char	*alpha;

	if (format == 'x')
		alpha = "0123456789abcdef";
	if (format == 'X')
		alpha = "0123456789ABCDEF";
	return (ft_base16(n, alpha));
}
