/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:38:55 by gpaeng            #+#    #+#             */
/*   Updated: 2022/02/04 17:24:47 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mush.h"

int	ft_cnt_arg(char *args[])
{
	int	i;

	i = 0;
	while (args[i])
	{
		i++;
	}
	return (i);
}
