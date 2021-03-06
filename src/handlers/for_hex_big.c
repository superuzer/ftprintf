/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_hex_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 02:42:11 by iganich           #+#    #+#             */
/*   Updated: 2018/04/01 02:42:15 by iganich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../headers/ft_printf.h"
#include "../../headers/handle_funcs.h"
#include "../../headers/utils.h"
#include <stdlib.h>

ssize_t	ft_printf_func_hex_big(char **format, va_list *args, t_prs *parser)
{
	uintmax_t	number;
	char		first;

	first = **format;
	first = first + 1;
	number = ft_printf_get_unsigned(args, parser);
	return (ft_printf_func_uint(number, parser, "0123456789ABCDEF", "0X"));
}
