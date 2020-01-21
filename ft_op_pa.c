/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_pa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:17:11 by plogan            #+#    #+#             */
/*   Updated: 2017/06/12 17:16:10 by plogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_op_pa(t_stack **a, t_stack **b, int usage)
{
	t_stack *temp;

	if (!*b)
		return ;
	if (!*a)
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = NULL;
	}
	else
	{
		temp = *a;
		*a = *b;
		*b = (*b)->next;
		(*a)->next = temp;
	}
	if (usage)
		write(1, "pa\n", 3);
	if (usage == 2)
		print_stacks(a, b);
}
