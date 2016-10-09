//
// Toy.hh for  in /home/liege_m/rendu/Piscine_C++/cpp_santa
//
// Made by maxime liege
// Login   <liege_m@epitech.net>
//
// Started on  Sat Jan 16 11:46:39 2016 maxime liege
// Last update Sat Jan 16 16:25:47 2016 Marc Pazat
//

#ifndef TOY_H_
#define TOY_H_

#include "Object.hh"
#include <string>

class Toy : public Object
{

 public:
   Toy(std::string const &name);
   Toy(const Toy &);
   Toy &operator=(const Toy &);
   virtual ~Toy();

   virtual void			isTaken() const = 0;
   virtual std::string  getName() const;
   virtual std::string	getType() const;
 protected:
   std::string		Name;
 private:
   std::string		type;
};

Object			**MyUnitTests();

#endif /* !TOY_H_ */
