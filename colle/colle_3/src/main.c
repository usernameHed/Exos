/*
** main.c for  in /home/belfio_u/Hed/colle/colle_3/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:11:14 2015 ugo belfiore
** Last update Tue May 12 17:00:06 2015 ugo belfiore
*/

#include "colle.h"

int	*my_realloc(int *ptr)
{
  int	*new;
  int	i;

  i = -1;
  while (ptr[++i]);
  if ((new = malloc(sizeof(int) * (i + 64))) == NULL)
    return (NULL);
  i = -1;
  while (ptr[++i])
    new[i] = ptr[i];
  new[++i] = 0;
  free(ptr);
  return (new);
}

int	insert_range(char *str, int *ptr, t_var *var)
{
  int	max;
  int	min;
  
  min = ptr[var->j];
  if ((max = my_getnbr(str + var->k + 1)) <= min)
    return (-1);
  while (++min <= max)
    {
      ptr[++var->j] = min;
      if (var->j % 64 == 0 && var->j)
	if ((ptr = my_realloc(ptr)) == NULL)
	  return (-1);
    }
  return (0);
}

int	*get_the_nums(char **tab)
{
  t_var	var;

  if ((var.ptr = malloc(sizeof(int) * 65)) == NULL)
    return (NULL);
  var.i = -1;
  var.j = -1;
  while (tab[++var.i])
    {
      var.k = -1;
      if ((var.ptr[++var.j] = my_getnbr(tab[var.i])) <= 0)
	return (NULL);
      if (var.j % 64 == 0 && var.j)
	if ((var.ptr = my_realloc(var.ptr)) == NULL)
	  return (NULL);
      while (tab[var.i][++var.k])
	{
	  if (tab[var.i][var.k] == '-' && tab[var.i][var.k + 1])
	    {
	      if (insert_range(tab[var.i], var.ptr, &var) == -1)
		return (NULL);
	    }
	}
    }
  var.ptr[++var.j] = 0;
  return (var.ptr);
}

int	*test_options(char **av)
{
  char	**ranges;
  int	*ptr;

  if (av[1][0] == '-')
    {
      if (!av[1][1] || av[1][2])
	{
	  write(1, "Unknown option\n", 15);
	  return (NULL);
	}
      else
	{
	  if ((ranges = my_wordtab_sep(av[2], ',')) == NULL)
	    return (NULL);
	  if ((ptr = get_the_nums(ranges)) == NULL)
	    {
	      write(1, "error in specified numbers\n", 28);
	      return (NULL);
	    }
	  return (ptr);
	}
    }
  else
    write(1, "Please specify an option starting by -\n", 39);
  return (NULL);
}

int		main(int ac, char **av)
{
  t_data        d;
  int           ret;
  int		*ptr;

  d.size = -1;
  if (ac < 3)
    {
      write(1, "cut: you must specify a list of ", 32);
      write(1, "bytes or characters\n", 18);
    }
  else
    {
      if ((ptr = test_options(av)) != NULL)
	{
	  while (ptr[++d.size]);
	  ret = read(0, d.buff, 8192000);
	  if (ret == 0 || ret > 8191999)
	    {
	      my_putstr("lecture invalide.\n");
	      return (0);
	    }
	  //	  ptr = my_sort_int_tab(ptr, d.size);
	  //my_show_c(&d, ptr, d.size);
	  int	*ptr = malloc(sizeof(int) * 2);
	  ptr[0] = 2;
	  ptr[1] = 4;
	  my_show_d(&d, ptr, 2, ',');
	}
    }
  return (0);
}
