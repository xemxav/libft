/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xmoreau <xmoreau@student.42.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 15:06:27 by xmoreau      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:06:28 by xmoreau     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	VOID_NULL_CHECK(s);
	VOID_NULL_CHECK(f);
	while (*s)
	{
		f(s++);
	}
}