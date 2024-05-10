#include "test1.h"

test1::test1() { c = new test11(); }

test1::~test1() { std::cout << "test1 dtor" << std::endl; }