/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:23:21 by plogan            #+#    #+#             */
/*   Updated: 2017/06/12 17:17:08 by plogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_op_rb(t_stack **a, t_stack **b, int usage)
{
	t_stack *temp_start;
	t_stack *temp_end;

	(void)*a;
	if (!*b || !(*b)->next)
		return ;
	temp_start = (*b)->next;
	temp_end = *b;
	while (temp_end->next)
		temp_end = temp_end->next;
	temp_end->next = *b;
	(*b)->next = NULL;
	*b = temp_start;
	if (usage)
		write(1, "rb\n", 3);
	if (usage == 2)
		print_stacks(a, b);
}
