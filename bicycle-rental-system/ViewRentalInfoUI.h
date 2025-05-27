#pragma once

#include <fstream>
#include "ViewRentalInfo.h"
#include "Login.h"

class ViewRentalInfoUI {
 public:
  ViewRentalInfoUI(std::ifstream& in_fp,
                   std::ofstream& out_fp,
                   ViewRentalInfo* view_rental_info,
                   Login* login);

  void viewRentalInfo();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  ViewRentalInfo* view_rental_info_;
  Login* login_;
};
