/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/10 15:45:12 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/21 15:03:14 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_tabdel(void **tab)
{
	void **start;

	if ((start = tab) == NULL)
		return (tab);
	while (*tab)
		free(*(tab++));
	free(start);
	return (NULL);
}
