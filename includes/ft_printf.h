/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:31:43 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/20 20:31:45 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_check(char c);
int	ft_call(char c, va_list ptr);
int	print_c(va_list ptr);
int	print_s(va_list ptr);
int	print_id(va_list ptr);
int	print_u(va_list ptr);
int	print_x(va_list ptr, char c);
int	print_p(va_list ptr);

#endif
