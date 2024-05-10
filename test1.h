#ifndef TEST1_H
#define TEST1_H

#pragma once
#include <iostream>

#include "test11.h"

class test1 {
public:
  test1();
  ~test1();

private:
  int a;
  bool b;
  test11 *c;
};

#endif