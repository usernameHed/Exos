/*
** my_putstr.c for  in /home/belfio_u/rendu/EXOTEST/lib/my
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Mon Nov 24 08:23:53 2014 ugo belfiore
** Last update Wed Apr 29 10:46:59 2015 ugo belfiore
*/

#include "colle.h"

int	my_putstr(char *str)
{
  int	h;
  int	cmp;

  h = 0;
  cmp = 0;
  while (str[h] != '\0')
    {
      my_putchar(str[h]);
      h++;
      cmp++;
    }
  return (cmp);
}
