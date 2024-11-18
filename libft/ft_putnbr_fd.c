/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azrig <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:15:56 by azrig             #+#    #+#             */
/*   Updated: 2024/11/18 11:15:56 by azrig            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

#include <fcntl.h>  // For open
#include <unistd.h> // For write

int main(void)
{
    // Open a file to write output (you can also use STDOUT_FILENO for standard output)
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        return 1; // Error opening file
    }

    // Test cases
    ft_putnbr_fd(123, fd);          // Output: 123
    ft_putchar_fd('\n', fd);        // Newline
    ft_putnbr_fd(-123, fd);         // Output: -123
    ft_putchar_fd('\n', fd);        // Newline
    ft_putnbr_fd(0, fd);            // Output: 0
    ft_putchar_fd('\n', fd);        // Newline
    ft_putnbr_fd(-2147483648, fd);  // Output: -2147483648
    ft_putchar_fd('\n', fd);        // Newline
    ft_putnbr_fd(2147483647, fd);   // Output: 2147483647
    ft_putchar_fd('\n', fd);        // Newline

    // Close the file
    close(fd);
    return 0;
}
