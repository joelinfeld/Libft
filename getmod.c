/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:09:38 by jinfeld           #+#    #+#             */
/*   Updated: 2017/09/20 14:58:29 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	getmod(t_flag *flag, char *str)
{
	if (!ft_strlen(str))
		flag->mod = 0;
	if (ft_strequ(str, "l"))
		flag->mod = 1;
	if (ft_strequ(str, "ll"))
		flag->mod = 2;
	if (ft_strequ(str, "h"))
		flag->mod = 3;
	if (ft_strequ(str, "hh"))
		flag->mod = 4;
	if (ft_strequ(str, "j"))
		flag->mod = 5;
	if (ft_strequ(str, "z"))
		flag->mod = 6;
}
