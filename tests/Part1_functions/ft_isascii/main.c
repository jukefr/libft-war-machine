/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:00:10 by jtoty             #+#    #+#             */
/*   Updated: 2017/03/09 15:39:02 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../../../libft.h"
#include "../../fix_write.c"

void	ft_print_result(int n)
{
	if (n)
		fix_write(1, "1", 1);
	else
		fix_write(1, "0", 1);
}

int		main(int argc, const char *argv[])
{
	int		i;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		i = 0;
		while (i <= 47)
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 2)
	{
		i = '0';
		while (i <= '9')
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 3)
	{
		i = 58;
		while (i <= 64)
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 4)
	{
		i = 'A';
		while (i <= 'Z')
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 5)
	{
		i = 91;
		while (i <= 96)
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 6)
	{
		i = 'a';
		while (i <= 'z')
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 7)
	{
		i = 123;
		while (i <= 127)
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	else if (arg == 8)
	{
		i = 128;
		while (i <= 138)
		{
			ft_print_result(ft_isascii(i));
			i++;
		}
	}
	return (0);
}
