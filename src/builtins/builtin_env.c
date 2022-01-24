/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:28:29 by gpaeng            #+#    #+#             */
/*   Updated: 2022/01/24 21:27:48 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	builtin_env(char *args[])
{
	char	**env;

	env = jop.envp;
	if (ft_cnt_arg(args) >= 2)
	{
		printf("en: '%s': No such file or directory\n", args[1]);
		return ;
	}
	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}