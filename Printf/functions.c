/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:34:35 by danavarr          #+#    #+#             */
/*   Updated: 2024/08/19 11:35:09 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int *i)
{
	if (write(1, &c, 1) == -1)
	{
		*i = -1;
		return (*i);
	}
	(*i)++;
	return (*i);
}

int	ft_putstr_fd(char *s, int *i)
{
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		ft_putchar_fd(*s, i);
		s++;
	}
	return (*i);
}

int	ft_lines(int n, int size, int *i)
{
	int		cpy;
	char	c;

	cpy = n;
	while (n > 9)
	{
		n = n / 10;
		size = size * 10;
	}
	while (size > 0)
	{
		c = cpy / size + 48;
		ft_putchar_fd(c, i);
		cpy = cpy % size;
		size = size / 10;
	}
	return (*i);
}

int	ft_putnbr_fd(int n, int *i)
{
	int		size;

	size = 1;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', i);
		ft_putchar_fd('2', i);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', i);
		n = n * -1;
	}
	ft_lines(n, size, i);
	return (*i);
}

int	corpus(const char *s, va_list args, int *i)
{
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				ft_putchar_fd('%', i);
			if (*s == 'c')
				ft_putchar_fd(va_arg(args, int), i);
			corpus_plus(s, args, i);
		}
		else
		{
			ft_putchar_fd(*s, i);
		}
		s++;
	}
	return (*i);
}

int	corpus_plus(const char *s, va_list args, int *i)
{
	if (*s == 's')
		type_s(args, i);
	if (*s == 'i' || *s == 'd')
		type_i_d(args, i);
	if (*s == 'u')
		putnbr_un(va_arg(args, unsigned int), i);
	if (*s == 'x')
		puthexa(va_arg(args, unsigned int), i);
	if (*s == 'X')
		putcapital(va_arg(args, unsigned int), i);
	if (*s == 'p')
		type_p(args, i);
	return (*i);
}

