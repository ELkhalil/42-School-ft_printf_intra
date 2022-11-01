/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task_distributor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:32:17 by aelkhali          #+#    #+#             */
/*   Updated: 2022/11/01 15:03:07 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	task_distributor(va_list ap, char c)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		counter += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		counter += ft_putaddress(va_arg(ap, void *));
	else if (c == 'd' || c == 'i')
		counter += ft_put_intnbr(va_arg(ap, int));
	else if (c == 'u')
		counter += ft_put_unint(va_arg(ap, unsigned int));
	else if (c == 'x')
		counter += ft_put_hex(va_arg(ap, unsigned int), 0);
	else if (c == 'X')
		counter += ft_put_hex(va_arg(ap, unsigned int), 1);
	else if (c == '%')
		counter += ft_putchar('%');
	else
		counter++;
	return (counter);
}
