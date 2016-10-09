/*
** aff_pix_img.c for  in /home/belfio_u/rendu/EXOTEST/FDF
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct 31 16:36:46 2014 ugo belfiore
** Last update Wed May  6 09:27:30 2015 ugo belfiore
*/

#include "mini.h"

void	aff_pix_img(t_data *d, int x, int y)
{
  int	i;

  if (x < 0 || x >= d->x_max)
    return;
  if (y < 0 || y >= d->y_max)
    return;
  i = (d->sizeline * y) + (x * (d->bpp / 8));
  d->bigData[i] = mlx_get_color_value(d->mlx_ptr, d->colo);
  d->bigData[i + 1] = mlx_get_color_value(d->mlx_ptr, d->colo >> 8);
  d->bigData[i + 2] = mlx_get_color_value(d->mlx_ptr, d->colo >> 16);
}

void	aff_rec(t_data *d, int z[2], int x2, int y2)
{
  int	i;
  int	j;

  i = z[0];
  j = z[1];
  while (i++ <= x2)
    {
      while (j++ <= y2)
	aff_pix_img(d, i, j);
      j = z[1];
    }
}
