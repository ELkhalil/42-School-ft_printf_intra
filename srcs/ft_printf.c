/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:52:54 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/31 21:50:05 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	a_ptr;
	int		i_printed;
	int		i;

	i_printed = 0;
	i = 0;
	va_start(a_ptr, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			i_printed += task_distributor(a_ptr, s[i + 1]);
			i += 2;
		}
		if (s[i] != '%' && s[i])
			i_printed += ft_putchar(s[i++]);
	}
	return (i_printed);
}
