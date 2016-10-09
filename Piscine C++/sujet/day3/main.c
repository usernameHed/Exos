/*
** main.c for  in /home/belfio_u/rendu/piscine/piscine_cpp_d03
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Jan  8 09:58:01 2016 ugo belfiore
** Last update Fri Jan  8 22:57:34 2016 ugo belfiore
*/

#include "ex16/String.h"
#include <stdio.h>

int             main(void)
{
  String        this;
  String        test;

  StringInit(&this, "Voila");
  StringInit(&this, NULL);
  StringInit(NULL, "Voila");
  StringInit(NULL, NULL);
  StringInit(&test, "Voila");
  this.clear(&this);
  this.clear(NULL);
  this.clear(&this);
  printf("ex4 clear...\n");
  
  test.assign_c(&test, "OKOK youpidouuu");
  this.assign_s(&this, &test);
  test.assign_c(NULL, NULL);
  this.assign_s(NULL, NULL);

  test.append_c(&test, "salutsalut");
  this.append_s(&this, &test);
  this.append_s(NULL, &test);
  this.append_s(&this, NULL);
  test.append_c(NULL, NULL);
  this.append_s(NULL, NULL);

  this.aff(&this);
  printf("ex2 test result: %s\n", this.str);
  this.aff(&this);
  printf("ex3: %c\n", this.at(&this, 4));
  printf("ex3 null: %c\n", this.at(NULL, 4));
  printf("ex3 null: %c\n", this.at(&this, 1000));
  
  this.aff(&this);
  printf("ex5: %d\n", this.size(&this));
  printf("ex5 null: %d\n", this.size(NULL));
  
  this.aff(&this);
  printf("ex6s: %d\n", this.compare_s(&this, &test));
  printf("ex6s: %d\n", this.compare_s(NULL, &test));
  printf("ex6s: %d\n", this.compare_s(NULL, NULL));
  printf("ex6s null: %d\n", this.compare_s(&this, NULL));
  printf("ex6c: %d\n", this.compare_c(&this, "test"));
  printf("ex6c: %d\n", this.compare_c(NULL, "test"));
  printf("ex6c null: %d\n", this.compare_c(&this, NULL));
  printf("ex6c null: %d\n", this.compare_c(NULL, NULL));
  
  int i = this.copy(&this, "test", 2, 2);
  int j = this.copy(&this, NULL, 2, 2);
  int k = this.copy(NULL, NULL, 2, 2);

  this.aff(&this);
  printf("ex7 ok: %d\n",i);
  printf("ex7 null: %d\n",j);
  printf("ex7 null: %d\n",k);

  this.aff(&this);
  printf("ex8: %s\n", this.c_str(&this));
  printf("ex8: %s\n", this.c_str(NULL));

  this.aff(&this);
  printf("ex9 empty: %d\n", this.empty(&this));
  printf("ex9 empty: %d\n", this.empty(NULL));
  
  this.aff(&this);
  printf("ex10c: %d\n", this.find_c(&this, "ahashd", 3));
  printf("ex10c null: %d\n", this.find_c(NULL, NULL, 2));
  printf("ex10s: %d\n", this.find_s(&this, &test, 2));
  printf("ex10s null: %d\n", this.find_s(NULL, NULL, 2));
  this.aff(&this);
  
  printf("ex11:\n");
  this.insert_c(&this, 0, "fuck");
  this.insert_s(&this, 0, &test);
  this.insert_c(NULL, 0, NULL);
  this.insert_s(NULL, 0, NULL);
  this.aff(&this);

  printf("ex12: %d\n", this.to_int(&this));
  printf("ex12 null: %d\n", this.to_int(NULL));

  printf("ex13:\n");
  printf("ex13 null: DEBUG\n");
  //this.split_s(&this, 'u');
  //this.split_c(&this, 'u');
  //this.split_s(NULL, ' ');
  //this.split_c(NULL, ' ');

  this.aff(&this);
  
  //this.join_s(&this);
  //this.join_c(&this);


  return (0);
}
