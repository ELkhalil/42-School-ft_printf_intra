/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:57:39 by aelkhali          #+#    #+#             */
/*   Updated: 2022/11/01 13:42:27 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	count_int(long num)
{
	int	count;

	count = 0;
	while (num)
	{
		count++;
		num /= 10;
	}
	return (count);
}

int	ft_put_intnbr(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		count++;
	}
	if (num > -1 && num < 10)
		ft_putchar(num + '0');
	if (num == 0)
		return (1);
	if (num > 9)
	{
		ft_put_intnbr(num / 10);
		ft_put_intnbr(num % 10);
	}
	count += count_int(num);
	return (count);
}

int	ft_put_unint(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		ft_putchar((n + '0'));
	if (n > 9)
	{
		ft_put_unint(n / 10);
		ft_put_unint(n % 10);
	}
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}
