/*
** brut.c for  in /home/belfio_u/Hed/colle/colle_2
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 14:25:26 2015 ugo belfiore
** Last update Tue May  5 18:56:57 2015 ugo belfiore
*/

#include "colle.h"

void	brut(char *str)
{
  int	i;
  int	j;
  int	i_tmp;
  char	*tmp;
  char	*calc;

  tmp = malloc(sizeof(char) * my_strlen(str) + 1);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ')')
	{
	  while (i != -1 && str[i] != '(')
	    i--;
	  i_tmp = i;
	  str[i] = ' ';
	  i++;
	  j = 0;
	  while (str[i] != ')' && str[i])
	    {
	      tmp[j] = str[i];
	      str[i] = ' ';
	      i++;
	      j++;
	    }
	  tmp[j] = '\0';
	  calc = calcule_inter_para(tmp);
	  j = 0;
	  while (str[i_tmp] != ')' && str[i_tmp])
	    {
	      str[i_tmp] = calc[j];
	      j++;
	      i_tmp++;
	    }
	  str[i_tmp] = ' ';
	  str = epur_space(str);
	  i = 0;
	}
      i++;
    }
  str = epur_space(str);
  str = calcule_inter_para(str);
  str = epur_space(str);
  my_put_nbr(my_getnbr(str));
}
