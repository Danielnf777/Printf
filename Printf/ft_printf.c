/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danavarr <danavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:37:22 by danavarr          #+#    #+#             */
/*   Updated: 2024/07/29 13:24:35 by danavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	int			i;
	va_list		args;

	i = 0;
	va_start(args, s);
	corpus(s, args, &i);
	va_end(args);
	return (i);
}

/*#include <stdio.h>
int   main(void)
   {
   //	char  *test_p = "hola";
//	int     result;
  //    result = ft_printf("%s","");
 //      int     hex = 10;
 //      result  = ft_printf("hola");
 //      printf("%i\n", printf("hola"));
// 	printf(" %c ", 'p');
//	printf("%s", "");
//	ft_printf("%d", result);
//	ft_printf("%d", ft_printf("hola"));
//      ft_printf("the function%c", 'c');
 //      char *str = "The blue house";
 //      ft_printf("%X%d", ft_printf("%X%d", -4219));
//         ft_printf("%X", -1);
 //      ft_printf("%c", 'f');
 //      printf("%X\n", -1);
 //      ft_printf("%p %p\n", 0, 0);
 //      ft_printf("%d", result);
 //      printf("%p %p\n", 0, 0);
 //ft_printf("Thefunctioin %u\n", -1);
 //printf("Thefunction %u\n", -1 );
 //      ft_printf("%d\n", ft_printf("hola"));
 return (0);
}*/
