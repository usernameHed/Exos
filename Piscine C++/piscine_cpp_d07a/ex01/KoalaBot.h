/*
** KoalaBot.h for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex01
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:14 2016 Ugo
** Last update Wed Jan 13 14:56:15 2016 Ugo
*/

#ifndef _KOALABOT_H_
# define _KOALABOT_H_

#include "Parts.h"

class KoalaBot
{
  Arms _arms;
  Legs _legs;
  Head _head;
  std::string _serial;
public:
  KoalaBot(std::string serial = "Bob-01");
  ~KoalaBot();
  void  setParts(const Arms& arm);
  void  setParts(const Legs& leg);
  void  setParts(const Head& head);
  void  swapParts(Arms& arm);
  void  swapParts(Legs& leg);
  void  swapParts(Head& head);
  void  informations();
  bool  status();
};

#endif /*!_KOALABOT_H_*/
