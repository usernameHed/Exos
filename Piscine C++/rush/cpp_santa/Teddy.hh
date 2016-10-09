//
// Teddy.hh for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
// 
// Made by maxime liege
// Login   <liege_m@epitech.net>
// 
// Started on  Sat Jan 16 11:45:28 2016 maxime liege
// Last update Sat Jan 16 11:45:28 2016 maxime liege
//

#ifndef TEDDY_H_
#define TEDDY_H_

#include "Toy.hh"
#include <ostream>

class Teddy : public Toy
{

 public:
   Teddy(std::string const &name);
   Teddy(const Teddy &);
   Teddy &operator=(const Teddy &);
   virtual ~Teddy();

   void		isTaken() const;
};

#endif /* !TEDDY_H_ */
