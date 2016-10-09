/*
** mini.h for  in /home/belfio_u/rendu/rush_and_colle/elcrypt/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Sat Feb 28 09:37:18 2015 ugo belfiore
** Last update Sat Feb 28 10:58:30 2015 ugo belfiore
*/

#ifndef MINI_H_
#define MINI_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <math.h>
#include <time.h>

typedef struct	s_data
{
  int		i;
}               t_data;

/*
** fonction divers
*/

void    my_error(t_data *d, char *error, int w);
void	elcrypt(t_data *d, char *av);

#endif /* !MINI_H_ */
