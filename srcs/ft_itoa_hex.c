/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:30:17 by aelkhali          #+#    #+#             */
/*   Updated: 2022/11/01 13:21:56 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	len_calculator(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_itoa_hex(unsigned long num, int flag)
{
	char			*num_str;
	int				len;

	len = len_calculator(num);
	num_str = malloc (len + 1);
	if (!num_str)
		return (NULL);
	num_str[len--] = '\0';
	if (num == 0)
		num_str[0] = '0';
	while (num > 0)
	{
		if (flag)
			num_str[len--] = B_BASE_16[num % 16];
		else
			num_str[len--] = S_BASE_16[num % 16];
		num /= 16;
	}
	return (num_str);
}
