/*
** union.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar 18 08:41:22 2016 Exam User
** Last update Fri Mar 18 09:04:15 2016 Exam User
*/

#include <stdlib.h>
#include <string.h>

void my_putchar(char c)
{
  write (1, &c, 1);
}

void put(char *c)
{
  int i = 0;
  while (c[i])
    {
      my_putchar(c[i]);
      i++;
    }
}

void algo(char *str)
{
  int i = -1;
  while (str[++i])
    {
      if (i == 0)
	my_putchar(str[i]);
      else
	{
	  char c = str[i];
	  int tmp = i;
	  int no = 1;
	  //my_putchar(str[i]);
	  
	  while (--tmp >= 0)
	    {
	      //my_putchar(str[tmp]);
	      if (str[tmp] == c)
		no = 0;
	    }

	  if (no == 1)
	    my_putchar(str[i]);
	}
    }
}

void uni(char *s1, char *s2)
{
  int i = -1;
  int j = 0;
  char *tmp = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
  while (s1[++i])
    tmp[j++] = s1[i];
  i = -1;
  while (s2[++i])
    tmp[j++] = s2[i];
  tmp[j] = '\0';
  //put(tmp);
  algo(tmp);
}

int main(int ac, char **av)
{
  int i = -1;
  if (ac != 3)
    put("\n");
  else
    {
      uni(av[1], av[2]);
      put("\n");
    }
  return (0);
}
