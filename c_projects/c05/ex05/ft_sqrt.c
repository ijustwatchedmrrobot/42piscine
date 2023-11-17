/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 05:06:51 by sozdamar          #+#    #+#             */
/*   Updated: 2023/09/16 15:48:53 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nm;

	nm = nb;
	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= nm)
		{
			if ((i * i) == nm)
				return (i);
			i++;
		}
	}
	return (0);
}
