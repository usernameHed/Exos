/*
** my_show_c.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:54:00 2015 ugo belfiore
** Last update Tue May 12 16:40:47 2015 ugo belfiore
*/

#include "colle.h"

static void	mini_norme(t_data *d)
{
  d->colone++;
  d->i++;
  d->j++;
}

void	my_show_c(t_data *d, int *ptr, int size)
{
  d->i = 0;
  d->j = 0;
  d->colone = 1;
  while (d->buff[d->i] != '\0')
    {
      if (d->colone == ptr[d->j])
	my_putchar(d->buff[d->i]);
      else
	{
	  if (d->j == size)
	    {
	      while (d->buff[d->i] != '\n' && d->buff[d->i] != '\0')
		d->i++;
	      my_putchar(10);
	    }
	  d->j--;
	}
      if (d->buff[d->i] == '\n')
	{
	  d->colone = 0;
	  d->j = -1;
	}
      mini_norme(d);
    }
}
