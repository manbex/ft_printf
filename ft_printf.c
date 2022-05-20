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

#include <libft.h>

int	ft_call(char c, va_list ptr)
{
	if (c == 'c')
		return (ft_print_c(ptr));
	if (c == 's')
		return (ft_print_s(ptr));
	if (c == 'p')
		return ();
	if (c == ('d' || 'i'))
		return ();
	if (c == 'u')
		return ();
	if (c == ('x' || 'X'))
		return ();
	if (c == '%')
		return (write(1, '%', 1));
	return (-1);
}

int	ft_check(char c)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (c == "cspdiuxX%"[i])
			return (1);
		i++;
	}
	return (0)
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		size;
	int		tmp;

	va_start(ptr, str);
	size = 0;
	tmp = 0;
	while (*str)
	{
		if (*str == '%' && *str + 1)
		{
			tmp += ft_call(str + 1, ptr);
			if (tmp = -1)
				return (-1);
			size += tmp;
			*str++;
		}
		else
		{
			ft_putchar(str[i], 1);
			size++;
		}
		str++;
	}
	va_end(ptr);
	return (size);
}
