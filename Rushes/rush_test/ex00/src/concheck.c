/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioyeyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 21:09:34 by dioyeyel          #+#    #+#             */
/*   Updated: 2019/11/10 23:21:20 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <header.h>

void		printrush(char *ptr, int x, int y)
{
	x = x + '0';
	y = y + '0';
	write(1, ptr, 11);
	write(1, "[", 1);
	write(1, &x, 1);
	write(1, "] [", 4);
	write(1, &y, 1);
	write(1, "]", 1);
}

void		rush_or_check(char *ptr, int x, int y)
{
	printrush("[rush-02] ", x, y);
	write(1, "  ||  ", 4);
	printrush("[rush-03] ", x, y);
	write(1, "  ||  ", 4);
	printrush("[rush-04] ", x, y);
	*ptr = 'c';
}

void		multiple_print(char *ptr, int x, int y)
{
	printrush("[rush-03] ", x, y);
	write(1, " || ", 4);
	printrush("[rush-04] ", x, y);
	*ptr = 'c';
}

void		concheck(char *ptr, int x, int y)
{
	if (ptr[0] == 'o')
		printrush("[rush-00] ", x, y);
	else if (ptr[0] == '/')
		printrush("[rush-01] ", x, y);
	else if (ptr[0] == 'A' && ptr[1] == 'A')
		printrush("[rush-02] ", x, y);
	else if (ptr[0] == 'A' && ptr[1] == 'C' && ptr[2] == 'C')
		printrush("[rush-03] ", x, y);
	else if (ptr[0] == 'A' && ptr[1] == 'C' && ptr[2] == 'A')
		printrush("[rush-04] ", x, y);
	else if (ptr[0] == 'A' && ptr[1] == 'C')
		multiple_print(ptr, x, y);
	else if (ptr[0] == 'A')
		rush_or_check(ptr, x, y);
	else
		write(1, "you sent us garbage! ;)", 23);
	write(1, "\n", 1);
}
