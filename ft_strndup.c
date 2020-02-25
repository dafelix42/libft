/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 16:49:01 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/21 15:02:09 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s_copy;

	if (!(s_copy = (char *)malloc(sizeof(*s_copy) * (n + 1))))
		return (NULL);
	ft_strncpy(s_copy, s1, n);
	return (s_copy);
}
