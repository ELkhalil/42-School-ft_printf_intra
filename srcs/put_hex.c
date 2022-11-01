/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:15:48 by aelkhali          #+#    #+#             */
/*   Updated: 2022/11/01 15:03:15 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putaddress(void *addr)
{
	unsigned long	num;
	int				i;
	char			*str;

	num = (unsigned long)addr;
	i = 0;
	i += ft_putstr("0x");
	str = ft_itoa_hex(num, 0);
	i += ft_putstr(str);
	free(str);
	return (i);
}

int	ft_put_hex(unsigned int num, int flag)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_hex(num, flag);
	i += ft_putstr(str);
	free(str);
	return (i);
}
