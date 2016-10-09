/*
** KreogCom.h for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex02
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:38 2016 Ugo
** Last update Wed Jan 13 14:56:50 2016 Ugo
*/

#ifndef COM_H_
#define COM_H_

class KreogCom
{
 public:
  KreogCom(int x, int y, int serial);
  ~KreogCom();

 public:
  void    addCom(int x, int y, int serial);
  KreogCom        *getCom();
  void    removeCom();

 public:
  void ping();
  void locateSquad();

 private:
  KreogCom *next;
 private:

 private:
  const int m_serial;
  int	x;
  int	y;
};

#endif
