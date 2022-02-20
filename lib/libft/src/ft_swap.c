/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:31:07 by gpaeng            #+#    #+#             */
/*   Updated: 2022/02/21 03:27:04 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void **ptr1, void **ptr2)
{
	void	*tmp;

	if (!ptr1 || !ptr2)
		return ;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}
