/*
** my_put_nbr.c for  in /home/belfio_u/rendu/MUL_2014_wolf3d/lib
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Thu Dec  4 17:59:59 2014 ugo belfiore
** Last update Wed Apr 29 10:46:49 2015 ugo belfiore
*/

#include "colle.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}
