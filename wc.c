/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:00:55 by jinfeld           #+#    #+#             */
/*   Updated: 2017/09/20 14:58:39 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*wc(va_list args, char c, int mod)
{
	wchar_t		*str;

	str = (wchar_t *)malloc(sizeof(wchar_t) * 2);
	if ((mod = 1 && c == 'c') || (mod == 0 && c == 'C'))
		str[0] = va_arg(args, wchar_t);
	str[1] = L'\0';
	return (str);
}
