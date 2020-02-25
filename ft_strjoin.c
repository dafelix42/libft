/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 12:35:05 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 16:35:24 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_join;
	char	*new;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_join = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strnew(len_join);
	if (new == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new[i] = (char)s1[i];
		i++;
	}
	while (i < len_join)
	{
		new[i] = (char)*s2;
		i++;
		s2++;
	}
	return (new);
}
