/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:40:54 by hyeonsok          #+#    #+#             */
/*   Updated: 2022/02/21 03:28:04 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/is.h"

int	ft_isupper(int c)
{
	return ((unsigned char)c >= 0x41 && (unsigned char)c <= 0x5a);
}
