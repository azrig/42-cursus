/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <azrig@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:48:14 by azrig             #+#    #+#             */
/*   Updated: 2025/01/06 01:23:08 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;
	
	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_check(arg, str[i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
