/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 08:20:48 by atemfack          #+#    #+#             */
/*   Updated: 2019/11/10 20:25:34 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_first_or_last_line(int i, int ni, int bslash, int fslash)
{
	if (i == 0)
	{
		ft_putchar(bslash);
	}
	else if (i == (ni - 1))
	{
		ft_putchar(fslash);
	}
	else
	{
		ft_putchar(45);
	}
}

void	ft_print(int i, int j, int ni, int nj)
{
	if (j == 0)

	else if (j == (nj - 1));

	else
	{
		((i == 0) || (i == (ni - 1))) ? ft_putchar(124) : ft_putchar(' ');
	}
}

void	rush00(int ni, int nj)
{
	int	i;
	int j;

	j = 0;
	while (j < nj)
	{
		i = 0;
		while (i < ni)
		{
			ft_print(i, j, ni, nj);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
