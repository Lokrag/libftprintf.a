/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalsadi- <oalsadi-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:33:04 by oalsadi-          #+#    #+#             */
/*   Updated: 2024/03/14 17:33:36 by oalsadi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
int		ft_putnbr_base(unsigned long nbr, char *base, int result);
int		ft_printf(const char *str, ...);
int		ft_format_processor(char format, va_list args);
int		ft_hex_pointer(unsigned long p);
int		ft_check_format(const char *format, va_list args, int *i);

#endif
