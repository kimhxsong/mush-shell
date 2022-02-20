/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:35:14 by SSONG             #+#    #+#             */
/*   Updated: 2022/02/21 03:28:10 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/is.h"

int	ft_tolower(int c)
{
	if ((unsigned int)c >= 0x41 && (unsigned int)c <= 0x46)
		return ((unsigned int)c - 0x20);
	return ((unsigned char)c);
}
