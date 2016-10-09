/*
** half_str.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Feb 19 09:11:10 2016 Exam User
** Last update Fri Feb 19 09:17:01 2016 Exam User
*/

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  int	i = -1;
  while (str[++i])
    {
      my_putchar(str[i]);
    }
}

void my_putstr2(char *str)
{
  int	i = -1;
  while (str[++i])
    {
      if (!(i % 2))
	my_putchar(str[i]);
    }
  my_putchar('\n');
}

int main(int ac, char **av)
{
  if (ac < 2)
    my_putchar('\n');
  else
    {
      int i = -1;
      while (++i < ac)
	{
	  my_putstr2(av[i + 1]);
	}
    }
  return (0);
}
