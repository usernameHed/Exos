/*
** my_show_d.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 16:43:56 2015 ugo belfiore
** Last update Tue May 12 17:39:32 2015 ugo belfiore
*/

#include "colle.h"

static void	mini_norme(t_data *d, char c)
{
  if (d->buff[d->i] == c)
    {
      d->zone++;
      if (d->zz == 1)
	{
	  d->zz = 0;
	  d->j++;
	}
    }
  if (d->buff[d->i] == '\n')
    {
      d->j = 0;
      d->zone = 1;
      d->zz = 0;
    }  
}

void	my_show_d(t_data *d, int *ptr, int size, char c)
{
  d->i = 0;
  d->zone = 1;
  d->j = 0;
  d->zz = 0;
  while (d->buff[d->i] != '\0')
    {
      if (d->zone == ptr[d->j])
	{
	  d->zz = 1;
	  if (d->buff[d->i + 1] == '\0')
	    my_putchar(10);
	  else
	    my_putchar(d->buff[d->i]);
	}
      mini_norme(d, c);
      d->i++;
    }
}
