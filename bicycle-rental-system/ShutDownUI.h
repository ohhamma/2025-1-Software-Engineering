#pragma once

#include <fstream>
#include "ShutDown.h"

class ShutDownUI {
 public:
  ShutDownUI(std::ifstream& in_fp, std::ofstream& out_fp, ShutDown* shut_down);

  void shutDown();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  ShutDown* shut_down_;
};
