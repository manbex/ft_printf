/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:32:40 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/17 21:32:41 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_check(str)
{
	int	i;

	
	while (*str)
	{
		i = 0;
		if (*str == '%')
		{
			if (str[i] && str[i] )
				
		}
		*str++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;

	ft_check(str);
	va_start(ptr, str);
	va_end(ptr);
	return ();
}
