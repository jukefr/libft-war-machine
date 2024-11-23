/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjullien <kjullien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:32:17 by kjullien          #+#    #+#             */
/*   Updated: 2024/11/23 01:36:11 by kjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	fix_write(int fildes, const void *buf, size_t nbyte)
{
	int	r;

	r = write(fildes, buf, nbyte);
	(void)r;
}
