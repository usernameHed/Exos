/*
** hidnp.c for  in /home/exam/rendu/ex_2
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar  4 08:22:56 2016 Exam User
** Last update Fri Mar  4 08:49:25 2016 Exam User
*/

int pas_doublon(char *s1, int k)
{
  int i = -1;
  char c = s1[k];
  while (s1[++i] && i < k)
    {
      if (s1[i] == c)
	return (0);
    }
  return (1);
}

void inter(char *s1, char *s2)
{
  int i = -1, j = -1;
  while (s1[++i])
    {
      j = -1;
      while (s2[++j])
	{
	  if (s1[i] == s2[j])
	    {
	      if (pas_doublon(s1, i))
		write(1, &s1[i], 1);
	      break;
	    }
	}
    }
  write(1, "\n", 1);
}

int main(int ac, char **av)
{
  if (ac < 3)
    write(1, "\n", 1);
  else
    inter(av[1], av[2]);
  return (0);
}
