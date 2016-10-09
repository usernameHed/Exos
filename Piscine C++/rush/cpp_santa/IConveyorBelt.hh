/*
** Itapis for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 19:49:24 2016 Ugo
** Last update Sun Jan 17 01:14:59 2016 Ugo
*/

#ifndef		__ICONVEYORBELT_HH__
# define	__ICONVEYORBELT_HH__

#include "Object.hh"
#include <string>
#include <iostream>

class IConveyorBelt
{
public:
  virtual Object *take() = 0;
  virtual bool put(Object *) = 0;
  virtual void IN() = 0;
  virtual void OUT() = 0;
};

#endif
