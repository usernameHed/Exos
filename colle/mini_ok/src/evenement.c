/*
** evenement.c for  in /home/belfio_u/rendu/Allum1
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Mon Feb  2 18:47:55 2015 ugo belfiore
** Last update Wed May  6 09:27:16 2015 ugo belfiore
*/

#include "mini.h"

static void	colle(t_data *d)
{
  
}

int		manage_key(int keycode, void *param)
{
  t_data	*d;

  d = (t_data *)param;
  if (keycode == KEY_ESC)
    exit(0);
  return (0);
}

int		manage_expose(void *param)
{
  t_data	*d;

  d = (t_data *)param;
  mlx_put_image_to_window(d->mlx_ptr, d->win_ptr, d->img_ptr, 0, 0);
  return (0);
}

void		aff_colle(t_data *d, int x_max, int y_max)
{
  int		z[2];

  d->mlx_ptr = mlx_init();
  if (d->mlx_ptr == NULL)
    exit(0);
  d->win_ptr = mlx_new_window(d->mlx_ptr, x_max, y_max, "colle");
  d->img_ptr = mlx_new_image(d->mlx_ptr, x_max, y_max);
  d->bigData = mlx_get_data_addr(d->img_ptr, &d->bpp,
				 &d->sizeline, &d->endian);
  d->colo = COLOR_WHITE;
  z[0] = 0;
  z[1] = 0;
  aff_rec(d, z, d->x_max, d->y_max);
  colle(d);
  mlx_expose_hook(d->win_ptr, &manage_expose, (void *)(d));
  mlx_hook(d->win_ptr, 3, 3, &manage_key, (void *)(d));
  mlx_loop(d->mlx_ptr);
}
