/*
** ConveyorBelt.hh for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 20:46:24 2016 Ugo
** Last update Sun Jan 17 01:14:58 2016 Ugo
*/

  #ifndef __CONVEYORBELT_H__
  #define __CONVEYORBELT_H__

  #include <string>
  #include <iostream>
  #include "IConveyorBelt.hh"

  class ConveyorBeltPePeNoel : public IConveyorBelt
  {
  protected:
    Object *o;
  public:
    ConveyorBeltPePeNoel();
    virtual ~ConveyorBeltPePeNoel();
    Object *take();
    bool put(Object *);
    void IN();
    void OUT();
  };

  #endif /* !__CONVEYORBELT_H__*/
