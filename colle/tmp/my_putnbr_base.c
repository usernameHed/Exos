/*
** my_putnbr_base.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_J06/ex_15
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct 10 17:40:01 2014 ugo belfiore
** Last update Wed Apr 29 10:46:14 2015 ugo belfiore
*/

#include "colle.h"

void	my_putnbr_base(int cute, char *base)
{
  int	len;
  int	ness;
  int	result;

  len = my_strlen(base);
  if (cute < 0)
    {
      my_putchar('-');
      cute *= -1;
    }
  ness = 1;
  while ((cute / ness) >= len)
    ness *= len;
  while (ness > 0)
    {
      result = (cute / ness) % len;
      my_putchar(base[result]);
      ness /= len;
    }
}
