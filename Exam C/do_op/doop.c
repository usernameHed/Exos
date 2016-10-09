/*
** doop.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Mar 27 09:07:08 2015 Exam User
** Last update Fri Mar 27 09:13:03 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}


void	doop(int nb1, char c, int nb2)
{
  if (c == '+')
    printf("%d\n", nb1 + nb2);
  else if (c == '-')
    printf("%d\n", nb1 - nb2);
  else if (c == '*')
    printf("%d\n", nb1 * nb2);
  else if (c == '/')
    printf("%d\n", nb1 / nb2);
  else
    printf("%d\n", nb1 % nb2);
}

int	main(int ac, char **av)
{
  if (ac != 4)
    my_putchar(10);
  else
    {
      doop(atoi(av[1]), av[2][0], atoi(av[3]));
    }
  return (0);
}
