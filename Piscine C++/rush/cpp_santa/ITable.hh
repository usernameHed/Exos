//
// ITable.hh for pepenoel in /home/pazat_m/Epitech/piscineC++/cpp_santa/
//
// Made by Marc Pazat
// Login   <pazat_m@epitech.eu>
//
// Started on  Sat Jan 16 19:47:23 2016 Marc Pazat
// Last update Sat Jan 16 23:27:01 2016 Marc Pazat
//

#ifndef ITABLE_H_
#define ITABLE_H_

#include "Object.hh"

class ITable
{

 public:
  virtual Object **getObjects() const= 0;
  virtual bool   putOnTable(Object *) = 0;
  virtual Object *takeFromTable() = 0;
};

#endif /* !ITABLE_H_ */
