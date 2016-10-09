/*
** Skat.cpp for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex00
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:55:24 2016 Ugo
** Last update Wed Jan 13 14:55:28 2016 Ugo
*/

#include "Skat.h"
#include <iostream>

Skat::Skat(std::string const& name, int stimPaks)
{
  this->_name = name;
  this->stimpaks = stimPaks;
}

Skat::~Skat()
{
}

int   &Skat::stimPaks()
{
  return (this->stimpaks);
}

const std::string  &Skat::name()
{
  return (this->_name);
}

void  Skat::shareStimPaks(int number, int& stock)
{
  if (number > this->stimpaks)
    std::cout << "Don’t be greedy" << std::endl;
  else
    {
      std::cout << "Keep the change." << std::endl;
      this->stimpaks -= number;
      stock += number;
    }
}

void    Skat::addStimPaks(unsigned int number)
{
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  this->stimpaks += number;
}

void    Skat::useStimPaks()
{
  if (this->stimpaks <= 0)
    std::cout << "Mediiiiiic" << std::endl;
  else
  {
    this->stimpaks--;
    std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
  }
}

void    Skat::status()
{
  std::cout << "Soldier " << this->_name << " reporting " << this->stimpaks << " stimpaks remaining sir !" << std::endl;
}
