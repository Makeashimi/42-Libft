/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharloi <jcharloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:24:33 by jcharloi          #+#    #+#             */
/*   Updated: 2016/12/13 16:26:28 by jcharloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		fraiche;
	int		i;
	int		isnegative;

	fraiche = 0;
	i = 0;
	isnegative = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		isnegative = 1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (ft_isdigit(str[i])))
	{
		fraiche = str[i] - 48 + fraiche * 10;
		i++;
	}
	if (isnegative == 1)
		return (-fraiche);
	else
		return (fraiche);
}
