/*
** main.c for  in /home/belfio_u/rendu/MUL_2014_wolf3d
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Dec  5 17:23:50 2014 ugo belfiore
** Last update Wed May  6 09:27:11 2015 ugo belfiore
*/

#include "mini.h"

int		main()
{
  t_data	d;

  d.x_max = 1000;
  d.y_max = 900;
  aff_colle(&d, d.x_max, d.y_max);
  return (0);
}
