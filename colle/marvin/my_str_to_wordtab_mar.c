/*
** my_str_to_wordtab.c for  in /home/belfio_u/rendu/Piscine_C_J08/ex_04
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct 24 19:29:19 2014 ugo belfiore
** Last update Sun Jan  4 19:28:59 2015 ugo belfiore
*/

#include "./include/my.h"
#include "./include/mini.h"

int	cute_word(char *av)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (av[i])
    {
      if ((av[i] >= '0' && av[i] <= '9') || av[i] == '_' || av[i] == '*'
	  || (av[i] >= 'A' && av[i] <= 'Z') || av[i] == '[' || av[i] == '#'
	  || (av[i] >= 'a' && av[i] <= 'z') || av[i] == ']')
        {
          cpt++;
          while (av[i] && ((av[i] >= '0' && av[i] <= '9') || av[i] == '_'
			   || (av[i] >= 'A' && av[i] <= 'Z') || av[i] == '*'
			   || (av[i] >= 'a' && av[i] <= 'z') || av[i] == '#'
			   || av[i] == '[' || av[i] == ']'))
            i++;
        }
      i++;
    }
  return (cpt);
}

int	cute_char(char *av, int *i)
{
  int	cpt;

  cpt = 0;
  while (av[*i] && ((av[*i] >= '0' && av[*i] <= '9') || av[*i] == '_'
		    || (av[*i] >= 'A' && av[*i] <= 'Z') || av[*i] == '['
		    || (av[*i] >= 'a' && av[*i] <= 'z') || av[*i] == ']'
		    || av[*i] == '*' || av[*i] == '#'))
    {
      cpt++;
      *i = *i + 1;
    }
  return (cpt);
}

void	check_buff(char *buff)
{
  int	i;

  i = 0;
  while (buff[i])
    {
      if (buff[i] == '.')
	error(14);
      if ((buff[i] < '0' && buff[i] != ',' && buff[i] != '*' && buff[i] != ')'
	   && buff[i] != '(' && buff[i] != ' ') ||
	  (buff[i] > '9' && buff[i] < 'A' && buff[i] != ';') ||
	  buff[i] == '\\' || buff[i] == '^' || buff[i] == '`' ||
	  buff[i] > 'z')
	error(15);
      i++;
    }
}

void	my_str_to_wordtab_mar(t_file *f, char *buff)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  check_buff(buff);
  f->word = cute_word(buff);
  f->tab = (char **)malloc(sizeof(char *) * f->word);
  while (buff[i] && f->word > 0)
    {
      if ((buff[i] >= '0' && buff[i] <= '9') || buff[i] == '_'
	  || (buff[i] >= 'A' && buff[i] <= 'Z') || buff[i] == '['
	  || (buff[i] >= 'a' && buff[i] <= 'z') || buff[i] == ']'
	  || buff[i] == '*' || buff[i] == '#')
        {
          f->tab[a] = my_strdup(buff + i);
          f->tab[a][cute_char(buff, &i)] = '\0';
          a++;
          f->word--;
        }
      i++;
    }
  f->tab[cute_word(my_strdup(buff))] = NULL;
}
