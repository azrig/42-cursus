/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <azrig@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 01:22:08 by azrig             #+#    #+#             */
/*   Updated: 2025/01/06 01:22:18 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check(va_list arg, char format)
{
	int count;

	count = 0;
	if (format == 'c')
		count += (char)ft_putchar(va_arg(arg, int));
	else if (format == 's')
		count += ft_putstr(va_arg(arg, char*));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		count += ft_putun(va_arg(arg, unsigned int));
	else if (format == 'p')
		count += ft_putptr(va_arg(arg, void*));
	else if (format == 'x' || format == 'X')
		count += ft_puthexa(va_arg(arg, unsigned int), format);
	else if (format == '%')
		ft_putchar('%');
	return(count);
}
