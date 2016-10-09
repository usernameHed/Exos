/*
** KoalaBot.cpp for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex01
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:06 2016 Ugo
** Last update Wed Jan 13 14:56:09 2016 Ugo
*/

#include "KoalaBot.h"
#include "Parts.h"
#include <iostream>

KoalaBot::KoalaBot(std::string serial)
{
  this->_serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void    KoalaBot::setParts(const Arms &arm)
{
  this->_arms = arm;
}

void    KoalaBot::setParts(const Legs &leg)
{
  this->_legs = leg;
}

void    KoalaBot::setParts(const Head &head)
{
  this->_head = head;
}

void    KoalaBot::swapParts(Arms &arm)
{
  Arms  tmp;

  tmp = arm;
  arm = this->_arms;
  this->_arms = tmp;
}

void    KoalaBot::swapParts(Legs &leg)
{
  Legs  tmp;

  tmp = leg;
  leg = this->_legs;
  this->_legs = tmp;
}

void    KoalaBot::swapParts(Head &head)
{
  Head  tmp;

  tmp = head;
  head = this->_head;
  this->_head = tmp;
}

void    KoalaBot::informations()
{
  std::cout << "[KoalaBot] " << this->_serial << std::endl;
  this->_arms.informations();
  this->_legs.informations();
  this->_head.informations();
}

bool    KoalaBot::status()
{
  if (this->_arms.isFunctionnal() && this->_legs.isFunctionnal() && this->_head.isFunctionnal())
    return (true);
  return (false);
}
