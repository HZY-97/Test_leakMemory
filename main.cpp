#include <cstdlib>
#include <iostream>

#include "test1.h"
#include <atomic>
#include <csignal>
#include <cstdlib>
#include <memory>
#include <mutex>
#include <stdio.h>
#include <unistd.h>

using std::atomic;

atomic<bool> process_flag;

int main(int argc, char **argv) {
  process_flag.store(true);

  if (1) {
    std::cout << "t1" << std::endl;
    test1 *t1 = new test1();
  }

  std::cout << "asdasdsadasdasdsadasdas";
  return 0;
}