#pragma once

#include <fstream>
#include "RentBicycle.h"
#include "Login.h"

class RentBicycleUI {
 public:
  RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp,
                Login* login, RentBicycle* rent_bicycle);

  void rentBicycle();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  RentBicycle* rent_bicycle_;
  Login* login_;
};
