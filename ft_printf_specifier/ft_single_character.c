/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_character.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmabel <jmabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:08:56 by jmabel            #+#    #+#             */
/*   Updated: 2021/11/29 15:23:42 by jmabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_single_character(char **p, va_list *ap)
{
	char	c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	(*p)++;
	return (1);
}
