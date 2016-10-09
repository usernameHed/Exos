/*
** Skat.h for piscine_cpp_d07a in /home/belfio_u/rendu/piscine/piscine_cpp_d07a/ex00
**
** Made by Ugo
** Login   <belfio_u@epitech.net>
**
** Started on  Wed Jan 13 14:55:34 2016 Ugo
** Last update Wed Jan 13 14:55:37 2016 Ugo
*/

#ifndef _SKAT_H_
# define _SKAT_H_

#include <string>

class Skat
{
  std::string _name;
  int  stimpaks;
public:
  Skat(std::string const& name = "bob", int stimPaks = 15);
  ~Skat();
public:
  int& stimPaks();
  const std::string& name();
public:
  void    shareStimPaks(int number, int& stock);
  void    addStimPaks(unsigned int number);
  void    useStimPaks();
public:
  void status();
};

#endif /*!_SKAT_H_*/
