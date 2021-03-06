/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:07:38 by jinfeld           #+#    #+#             */
/*   Updated: 2017/09/20 14:50:18 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*o(va_list args, char c, int mod)
{
	char	*str;

	if (mod == 0 && c != 'O')
		str = ft_itoa_base(va_arg(args, unsigned int), 8, 1);
	if (mod == 1 || c == 'O')
		str = ft_itoa_base(va_arg(args, unsigned long), 8, 1);
	if (mod == 2)
		str = ft_itoa_base(va_arg(args, unsigned long long), 8, 1);
	if (mod == 3)
		str = ft_itoa_base((unsigned short)va_arg(args, unsigned int), 8, 1);
	if (mod == 4)
		str = ft_itoa_base((unsigned char)va_arg(args, unsigned int), 8, 1);
	if (mod == 5)
		str = ft_itoa_base(va_arg(args, uintmax_t), 8, 1);
	if (mod == 6)
		str = ft_itoa_base(va_arg(args, size_t), 8, 1);
	return (str);
}
