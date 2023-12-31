/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saydinli <saydinli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:12:46 by saydinli          #+#    #+#             */
/*   Updated: 2023/09/02 19:15:31 by saydinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	if_else(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) 
		|| ((i == y - 1 && j == x - 1 && j != 0 && i != 0)))
		ft_putchar('/');
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
		ft_putchar ('\\');
	else if ((i == 0 && (j < y || j > 0)) 
		|| (j == 0 && (i < x || i > 0)) 
		|| (i == y - 1 && (j < y || j > 0)) 
		|| (j == x - 1 && (i < x || i > 0)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if_else(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
