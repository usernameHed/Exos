//
// TablePePeNoel.hh for rush in /home/pazat_m/Epitech/piscineC++/cpp_santa/
//
// Made by Marc Pazat
// Login   <pazat_m@epitech.eu>
//
// Started on  Sat Jan 16 20:17:03 2016 Marc Pazat
// Last update Sun Jan 17 00:04:24 2016 Marc Pazat
//

#ifndef TABLE_H_
#define TABLE_H_

#include "Object.hh"
#include "ITable.hh"

class TablePePeNoel : public ITable
{
protected:
  Object **elem;
 public:
  TablePePeNoel(Object **elems = NULL);
  TablePePeNoel(const TablePePeNoel &);
  TablePePeNoel &operator=(const TablePePeNoel &);
  Object **getObjects() const;
  virtual ~TablePePeNoel();
  void    addRow(Object *);
  bool  putOnTable(Object *);
  Object *takeFromTable();
  int  getNbElems();
 };

#endif /* !TABLE_H_ */
