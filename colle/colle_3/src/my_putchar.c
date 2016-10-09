/*
** my_putstr.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:24:56 2015 ugo belfiore
** Last update Tue May 12 15:33:43 2015 benjamin fenasse
*/

#include "colle.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i = -1;

  while (str[++i]);
  return (i);
}
