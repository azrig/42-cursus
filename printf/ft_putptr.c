/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <azrig@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:48:44 by azrig             #+#    #+#             */
/*   Updated: 2025/01/06 03:03:09 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	int				count;
	unsigned long	arg2;

	arg2 = (unsigned long)arg;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa(arg2, 'x');
	return (count);
}