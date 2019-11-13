/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmidt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:37:42 by mschmidt          #+#    #+#             */
/*   Updated: 2019/11/12 14:57:19 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <header.h>

int		main(void)
{
	char	buf[2];
	int		rows;
	int		cols;
	char	indicator[4];
	int		i;

	i = 0;
	rows = 0;
	cols = 0;
	read(0, &indicator[0], 1);
	while (read(0, &buf[i], 1))
	{
		if (buf[i] == '\n' && rows == 0)
			indicator[1] = buf[!i];
		if (buf[i] == '\n')
			rows++;
		cols++;
		i = !i;
	}
	if (rows > 1)
		indicator[2] = buf[i];
	indicator[3] = '\0';
	concheck(indicator, cols / rows, rows);
	return (0);
}
