/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_power.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 17:51:05 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/21 16:10:44 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = i * nb;
		power--;
	}
	return (nb);
}
