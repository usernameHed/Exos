/*
** mini.h for  in /home/belfio_u/rendu/EXOTEST/FDF
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct 28 09:26:37 2014 ugo belfiore
** Last update Wed May  6 11:24:45 2015 ugo belfiore
*/

#ifndef MINI_H_
#define MINI_H_

#include <stdlib.h>
#include "mlx.h"

#define COLOR_WHITE 0xFFFFFF
#define KEY_ENTER 65293
#define KEY_ESC 65307
#define KEY_RIGHT 65363
#define KEY_LEFT 65361
#define KEY_UP 65362
#define KEY_DOWN 65364

typedef struct	s_data
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img_ptr;
  char		*bigData;
  int		x_min;
  int		y_min;
  int		x_max;
  int		y_max;
  int		colo;
  int		bpp;
  int		sizeline;
  int		endian;
}               t_data;

void	aff_colle(t_data *d, int x_max, int y_max);
void	aff_pix_img(t_data *d, int x, int y);
void	aff_rec(t_data *d, int z[2], int x2, int y2);

#endif
