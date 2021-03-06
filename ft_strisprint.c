/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strisprint.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 16:44:20 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:48:59 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisprint(char *str)
{
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}
