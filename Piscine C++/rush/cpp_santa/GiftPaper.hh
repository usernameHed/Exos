/*
** GiftPaper.h for cpp_santa in /home/belfio_u/rendu/rush/cpp_santa
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Sat Jan 16 13:03:54 2016 Ugo
** Last update Sat Jan 16 18:02:28 2016 Marc Pazat
*/

#ifndef GIFT_H
#define GIFT_H

#include "Wrap.hh"
#include <iostream>
#include <string>

class GiftPaper : public Wrap
{
public:
  GiftPaper();
  GiftPaper(const GiftPaper &);
  GiftPaper &operator=(const GiftPaper &);
  virtual ~GiftPaper();

  std::string		getType() const;
  void		wrapMeThat(Object *box);
  Object	*openMe();
  void		closeMe();
};

#endif
