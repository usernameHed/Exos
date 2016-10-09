/*
** KreogCom.cpp for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex02
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:56:34 2016 Ugo
** Last update Wed Jan 13 14:56:35 2016 Ugo
*/

#include <string>
#include <iostream>
#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial)
  : m_serial(serial)
{
  this->x = x;
  this->y = y;
  this->next = NULL;
  std::cout << "KroegCom " << this->m_serial << " initialised" << std::endl;
}

KreogCom::~KreogCom()
{
  std::cout << "KroegCom " << this->m_serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
  KreogCom	*com;

  com = new KreogCom(x, y, serial);
  if (this->next != NULL)
    com->next = this->next;
  this->next = com;
}

KreogCom *KreogCom::getCom()
{
  if (this->next)
    return (this->next);
  else
    return (0);
}

void KreogCom::removeCom()
{
  KreogCom	*ptr;


  if (this->next != NULL)
    ptr = this->next;
  if (ptr->next != NULL)
    this->next = ptr->next;
  delete (ptr);
}

void KreogCom::ping()
{
  std::cout << "KreogCom " << this->m_serial << " currently at " << this->x
	    << " " << this->y << std::endl;
}

void KreogCom::locateSquad()
{
  KreogCom	*ptr;

  if (this->next != NULL)
    ptr = this->next;
  else
    ptr = NULL;
  while (ptr != NULL)
    {
      ptr->ping();
      ptr = ptr->next;
    }
  this->ping();
}
