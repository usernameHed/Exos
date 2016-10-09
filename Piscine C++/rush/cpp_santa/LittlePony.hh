//
// LittlePony.hh for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
// 
// Made by maxime liege
// Login   <liege_m@epitech.net>
// 
// Started on  Sat Jan 16 11:46:22 2016 maxime liege
// Last update Sat Jan 16 11:46:22 2016 maxime liege
//

#ifndef LITTLEPONY_H_
#define LITTLEPONY_H_

#include "Toy.hh"
#include <ostream>
#include <string>

class LittlePony : public Toy
{

 public:
   LittlePony(std::string const &name);
   LittlePony(const LittlePony &);
   LittlePony &operator=(const LittlePony &);
   virtual ~LittlePony();

   void		isTaken() const;
};

#endif /* !LITTLEPONY_H_ */
