/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:15:21 by jinfeld           #+#    #+#             */
/*   Updated: 2017/09/20 14:58:36 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*s(va_list args, int mod)
{
	char	*str;

	str = NULL;
	if (mod == 0)
		str = va_arg(args, char*);
	return (str);
}
