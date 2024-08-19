/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:22:26 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/29 13:19:20 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_putchar_fd(char c, int *i);
int		ft_putstr_fd(char *s, int *i);
int		ft_printf(char const *s, ...);
int		corpus(const char *s, va_list args, int *i);
int		corpus_plus(const char *s, va_list args, int *i);
int		putcapital(unsigned int nbr, int *i);
int		puthexa(unsigned int nbr, int *i);
int		putnbr_un(unsigned int nb, int *i);
int		put_adress(unsigned long admem, int *i);
int		type_p(va_list args, int *i);
int		type_s(va_list args, int *i);
int		type_i_d(va_list args, int *i);
int		ft_putnbr_fd(int n, int *i);

#endif
