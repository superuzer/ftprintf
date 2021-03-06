/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_bin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 02:52:22 by iganich           #+#    #+#             */
/*   Updated: 2018/04/01 02:52:33 by iganich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../../headers/ft_printf.h"
#include "../../headers/handle_funcs.h"
#include "../../headers/utils.h"

ssize_t	ft_printf_func_binary(char **format, va_list *args, t_prs *parser)
{
	uintmax_t	integer;
	ssize_t		ret;

	(void)format;
	integer = ft_printf_get_unsigned(args, parser);
	ret = ft_printf_func_uint(integer, parser, "01", "0b");
	return (ret);
}
