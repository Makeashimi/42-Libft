/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharloi <jcharloi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:13:00 by jcharloi          #+#    #+#             */
/*   Updated: 2016/12/05 13:27:49 by jcharloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *l_new)
{
	t_list	*l_start;

	if (alst)
	{
		l_start = *alst;
		*alst = l_new;
		l_new->next = l_start;
	}
	else
		*alst = l_new;
}
