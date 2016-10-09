/*
** Wrap.h for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 13:08:21 2016 Ugo
** Last update Sat Jan 16 18:12:24 2016 Marc Pazat
*/

#ifndef WARP_H
#define WARP_H

#include "Object.hh"
#include <iostream>
#include <string>

class Wrap : public Object
{
public:
  Wrap(std::string const &name);
  Wrap(const Wrap &);
  Wrap &operator=(const Wrap &);
  virtual ~Wrap();

  virtual 	std::string		getType() const = 0;
  virtual	void			wrapMeThat(Object *toy) = 0;
  virtual void				isTaken() const;
  virtual	Object			*openMe() = 0;
  virtual	void			closeMe() = 0;
  virtual std::string		getName() const;
protected:
  Object	*present;
  std::string		type;
  std::string		Name;
};

Object	*MyUnitTests(Object **tab);

#endif
