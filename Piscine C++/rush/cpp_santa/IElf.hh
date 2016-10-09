//
// IElf.hh for  in /home/charpa_j/Rendu/PiscineCPP/cpp_santa
// 
// Made by charpa_j
// Login   <charpa_j@epitech.net>
// 
// Started on  Sat Jan 16 20:50:54 2016 charpa_j
// Last update Sat Jan 16 21:13:13 2016 charpa_j
//

#ifndef _IELF_HH_
#define _IELF_HH_


class		IElf
{
protected:

  virtual void putObjectOnTable() = 0;
  virtual void takeObjectOnTable() const = 0;
  virtual void putObjectOnConveyorBelt() = 0;
  virtual void takeObjectOnConveyorBelt() const = 0;
}


#endif /*	!IElf_HH_ */
