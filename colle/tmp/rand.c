/*
** rand.c for  in /home/belfio_u/rendu/EXOTEST/lib/my
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Mon Nov  3 09:42:31 2014 ugo belfiore
** Last update Wed Apr 29 10:42:36 2015 ugo belfiore
*/

#include <time.h>
#include "colle.h"

int	my_rand(unsigned int m)
{
  unsigned int	a;
  unsigned int	b;
  unsigned int	nombre = time(NULL);

  a = 3;
  b = 3;
  nombre = (a * nombre + b) % m;
  return (nombre);
}
