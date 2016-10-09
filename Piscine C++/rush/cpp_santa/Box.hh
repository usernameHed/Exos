/*
** Box.hh for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 13:26:07 2016 Ugo
** Last update Sat Jan 16 18:01:36 2016 Marc Pazat
*/

#ifndef BOX_H_
#define BOX_H_

#include	"Wrap.hh"
#include <iostream>
#include <string>

class Box : public Wrap
{
private:
	bool	isOpen;
	Object	*present;

public:
  Box();
  Box(const Box &);
  Box &operator=(const Box &);
  virtual ~Box();

  std::string		getType() const;
  void	wrapMeThat(Object *toy);
  Object	*openMe();
  void	closeMe();
};

#endif
