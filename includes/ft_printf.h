/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:53:46 by aelkhali          #+#    #+#             */
/*   Updated: 2022/11/01 15:05:25 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define S_BASE_16 "0123456789abcdef"
# define B_BASE_16 "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
int		task_distributor(va_list ap, char c);

//utils
int		ft_putaddress(void *addr);
int		ft_put_intnbr(int n);
int		ft_put_unint(unsigned int n);
int		ft_put_hex(unsigned int num, int flag);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	*ft_itoa_hex(unsigned long n, int flag);

#endif
