#pragma once

#include <fstream>
#include <string>
#include "RegisterBicycle.h"

class RegisterBicycleUI {
 public:
  RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp, RegisterBicycle* register_bicycle);

  void registerBicycle();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  RegisterBicycle* register_bicycle_;
};