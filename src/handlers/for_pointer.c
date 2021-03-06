/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 02:49:44 by iganich           #+#    #+#             */
/*   Updated: 2018/04/01 03:17:52 by iganich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../libft/includes/libft.h"
#include "../../headers/ft_printf.h"
#include "../../headers/handle_funcs.h"
#include "../../headers/utils.h"
#include <stdint.h>

ssize_t	ft_printf_func_pointer(char **format, va_list *args, t_prs *parser)
{
	uintmax_t	number;

	(void)format;
	parser->len = key_z;
	if (parser->tochka_present)
		parser->zero = 0;
	number = ft_printf_get_unsigned(args, parser);
	return (ft_printf_numberandstring(number, "0123456789abcdef"
				, parser, "0x"));
}
