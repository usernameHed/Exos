//
// Object.hh for rush2 in /home/pazat_m/Epitech/piscineC++/cpp_santa/
//
// Made by Marc Pazat
// Login   <pazat_m@epitech.eu>
//
// Started on  Sat Jan 16 18:12:51 2016 Marc Pazat
// Last update Sat Jan 16 18:12:58 2016 Marc Pazat
//

#ifndef OBJECT_H_
#define OBJECT_H_

#include <string>
#include <iostream>

class Object
{

 public:
   virtual ~Object();
   virtual std::string	getType() const = 0;
   virtual void			isTaken() const = 0;
   virtual std::string  getName() const = 0;
};

std::ostream	&operator<<(std::ostream &os, const Object &other);


#endif /* !OBJECT_H_ */
