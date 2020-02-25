/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strinc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 12:09:11 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/21 16:34:38 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinc(char *str, int i)
{
	unsigned int	nb;

	nb = 0;
	if (i < 0)
		return (str);
	if ((ft_strisdigit((char *)str) == 1) || i != 0)
	{
		nb = ft_atoi(str);
		nb += i;
		if (nb <= 2147483647)
			str = (char *)ft_itoa(nb);
	}
	return (str);
}
