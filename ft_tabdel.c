/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharloi <jcharloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:18:49 by jcharloi          #+#    #+#             */
/*   Updated: 2016/12/14 13:34:08 by jcharloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(void	***tab)
{
	int i;
	void **bloc;

	i = 0;
	if (*tab == NULL)
		return ;
	bloc = *tab;
	while (bloc[i])
	{
		ft_memdel(&(bloc[i]));
		i++;
	}
	ft_memdel((void **)(&bloc));
	bloc = NULL;
}
