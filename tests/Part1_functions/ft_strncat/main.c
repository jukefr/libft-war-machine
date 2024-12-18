/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:06:58 by jtoty             #+#    #+#             */
/*   Updated: 2017/03/09 15:45:04 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../../../libft.h"
#include "../../fix_write.c"

int		main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[8] = 'a';
		if (dest != ft_strncat(dest, "lorem", 2))
			fix_write(1,"dest's adress was not returned\n", 31);
		fix_write(1, dest, 15);
	}
	else if (arg == 2)
	{
		dest[11] = 'a';
		if (dest != ft_strncat(dest, "lorem", 9))
			fix_write(1,"dest's adress was not returned\n", 31);
		fix_write(1, dest, 15);
	}
	else if (arg == 3)
	{
		if (dest != ft_strncat(dest, "", 3))
			fix_write(1,"dest's adress was not returned\n", 31);
		fix_write(1, dest, 15);
	}
	else if (arg == 4)
	{
		if (dest != ft_strncat(dest, "lorem ipsum", 0))
			fix_write(1,"dest's adress was not returned\n", 31);
		fix_write(1, dest, 15);
	}
	else if (arg == 5)
	{
		dest[0] = '\0';
		dest[10] = 'a';
		if (dest != ft_strncat(dest, "lorem ipsum", 10))
			fix_write(1,"dest's adress was not returned\n", 31);
		fix_write(1, dest, 15);
	}
	return (0);
}
