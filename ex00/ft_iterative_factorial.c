/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:44:11 by ltacos            #+#    #+#             */
/*   Updated: 2021/08/11 14:49:28 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 0;
	factorial = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb && ++i)
		factorial *= i;
	return (factorial);
}
